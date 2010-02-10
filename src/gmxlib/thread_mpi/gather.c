/*
This source code file is part of thread_mpi.  
Written by Sander Pronk, Erik Lindahl, and possibly others. 

Copyright (c) 2009, Sander Pronk, Erik Lindahl.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1) Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2) Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3) Neither the name of the copyright holders nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY US ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL WE BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

If you want to redistribute modifications, please consider that
scientific software is very special. Version control is crucial -
bugs must be traceable. We will be happy to consider code for
inclusion in the official distribution, but derived work should not
be called official thread_mpi. Details are found in the README & COPYING
files.
*/


/* this file is #included from collective.c */


int tMPI_Gather(void* sendbuf, int sendcount, tMPI_Datatype sendtype,
                void* recvbuf, int recvcount, tMPI_Datatype recvtype, 
                int root, tMPI_Comm comm)
{
    int synct;
    struct coll_env *cev;
    int myrank;
    int ret=TMPI_SUCCESS;
    struct tmpi_thread *cur=tMPI_Get_current();
    bool last_found=TRUE;

#ifdef TMPI_PROFILE
    tMPI_Profile_count_start(cur); 
#endif
#ifdef TMPI_TRACE
    tMPI_Trace_print("tMPI_Gather(%p, %d, %p, %p, %d, %p, %d, %p)",
                     sendbuf, sendcount, sendtype, 
                     recvbuf, recvcount, recvtype, root, comm);
#endif

    if (!comm)
    {
        return tMPI_Error(TMPI_COMM_WORLD, TMPI_ERR_COMM);
    }
    myrank=tMPI_Comm_seek_rank(comm, cur);

    /* we increase our counter, and determine which coll_env we get */
    cev=tMPI_Get_cev(comm, myrank, &synct);

    if (myrank==root)
    {
        int i;
        int n_remaining=comm->grp.N-1;
        /* do root transfer */
        if (sendbuf!=TMPI_IN_PLACE)
        {
            tMPI_Coll_root_xfer(comm, sendtype, recvtype,
                                sendtype->size*sendcount, 
                                recvtype->size*recvcount, 
                                sendbuf, 
                                (char*)recvbuf+myrank*recvcount*recvtype->size,
                                &ret);
        }
        for(i=0;i<comm->grp.N;i++)
            cev->met[myrank].read_data[i]=FALSE;
        cev->met[myrank].read_data[myrank]=TRUE;

        /* poll data availability as long as there are xfers to be done */
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
        tMPI_Profile_wait_start(cur);
#endif
        while(n_remaining>0)
        {
            if (!last_found) 
            {
                /* only yield if the last iteration didn't find anything */
                TMPI_YIELD_WAIT(cur);
            }
            last_found=FALSE;
            for(i=0;i<comm->grp.N;i++)
            {
                if ( !cev->met[myrank].read_data[i] &&
                    (tMPI_Atomic_get(&(cev->met[i].current_sync))== synct))
                {
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
                    tMPI_Profile_wait_stop(cur, TMPIWAIT_Coll_recv);
                    /* we don't count transfers as waits */ 
#endif


                    tMPI_Mult_recv(comm, cev, i, 0, TMPI_GATHER_TAG, recvtype, 
                                   recvcount*recvtype->size,
                                   (char*)recvbuf+i*recvcount*recvtype->size,
                                   &ret);
                    if (ret!=TMPI_SUCCESS)
                        return ret;
                    cev->met[myrank].read_data[i]=TRUE;
                    n_remaining--;
                    last_found=TRUE;
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
                    tMPI_Profile_wait_start(cur);
#endif
                }
            }
        }
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
        tMPI_Profile_wait_stop(cur, TMPIWAIT_Coll_recv);
#endif
    }
    else
    {
        if (!sendbuf) /* don't do pointer arithmetic on a NULL ptr */
        {
            return tMPI_Error(comm, TMPI_ERR_BUF);
        }

        /* first set up the data */
        tMPI_Post_multi(cev, myrank, 0, TMPI_GATHER_TAG, sendtype, 
                        sendcount*sendtype->size, sendbuf, 1, synct);
        /* and wait until root is done copying */
        tMPI_Wait_for_others(cev, myrank);
    }
#ifdef TMPI_PROFILE
    tMPI_Profile_count_stop(cur,TMPIFN_Gather); 
#endif
    return ret;
}






int tMPI_Gatherv(void* sendbuf, int sendcount, tMPI_Datatype sendtype,
                 void* recvbuf, int *recvcounts, int *displs,
                 tMPI_Datatype recvtype, int root, tMPI_Comm comm)
{
    int synct;
    struct coll_env *cev;
    int myrank;
    int ret=TMPI_SUCCESS;
    struct tmpi_thread *cur=tMPI_Get_current();
    bool last_found=TRUE;

#ifdef TMPI_PROFILE
    tMPI_Profile_count_start(cur); 
#endif
#ifdef TMPI_TRACE
    tMPI_Trace_print("tMPI_Gatherv(%p, %d, %p, %p, %p, %p, %p, %d, %p)",
                     sendbuf, sendcount, sendtype, recvbuf,
                     recvcounts, displs, recvtype, root, comm);
#endif

    if (!comm)
    {
        return tMPI_Error(TMPI_COMM_WORLD, TMPI_ERR_COMM);
    }
    myrank=tMPI_Comm_seek_rank(comm, cur);

    /* we increase our counter, and determine which coll_env we get */
    cev=tMPI_Get_cev(comm, myrank, &synct);

    if (myrank==root)
    {
        int i;
        int n_remaining=comm->grp.N-1;
        /* do root transfer */
        if (sendbuf!=TMPI_IN_PLACE)
        {
            tMPI_Coll_root_xfer(comm, sendtype, recvtype,
                                sendtype->size*sendcount, 
                                recvtype->size*recvcounts[myrank], 
                                sendbuf, 
                                (char*)recvbuf+displs[myrank]*recvtype->size, 
                                &ret);
        }
        for(i=0;i<comm->grp.N;i++)
            cev->met[myrank].read_data[i]=FALSE;
        cev->met[myrank].read_data[myrank]=TRUE;

        /* poll data availability */
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
        tMPI_Profile_wait_start(cur);
#endif
        while(n_remaining>0)
        {            
            if (!last_found) 
            {
                /* only yield if the last iteration didn't find anything */
                TMPI_YIELD_WAIT(cur);
            }
            last_found=FALSE;
            for(i=0;i<comm->grp.N;i++)
            {
                if ( !cev->met[myrank].read_data[i] &&
                    (tMPI_Atomic_get(&(cev->met[i].current_sync))==synct) )
                {
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
                    tMPI_Profile_wait_stop(cur, TMPIWAIT_Coll_recv);
                    /* we don't count transfers as waits */ 
#endif
                    tMPI_Mult_recv(comm, cev, i, 0, TMPI_GATHERV_TAG, recvtype,
                                   recvcounts[i]*recvtype->size,
                                   (char*)recvbuf+displs[i]*recvtype->size,
                                   &ret);
                    if (ret!=TMPI_SUCCESS)
                        return ret;
                    cev->met[myrank].read_data[i]=TRUE;
                    n_remaining--;
                    last_found=TRUE;
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
                    tMPI_Profile_wait_start(cur);
#endif
                }
            }
        }
#if defined(TMPI_PROFILE) && defined(TMPI_CYCLE_COUNT)
        tMPI_Profile_wait_stop(cur, TMPIWAIT_Coll_recv);
#endif
    }
    else
    {
        if (!sendbuf) /* don't do pointer arithmetic on a NULL ptr */
        {
            return tMPI_Error(comm, TMPI_ERR_BUF);
        }

        /* first set up the data */
        tMPI_Post_multi(cev, myrank, 0, TMPI_GATHERV_TAG, sendtype, 
                        sendcount*sendtype->size, sendbuf, 1, synct);
        /* and wait until root is done copying */
        tMPI_Wait_for_others(cev, myrank);
    }

#ifdef TMPI_PROFILE
    tMPI_Profile_count_stop(cur, TMPIFN_Gatherv); 
#endif
    return ret;
}




