/*
 * Copyright (c) 1997 Massachusetts Institute of Technology
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to use, copy, modify, and distribute the Software without
 * restriction, provided the Software, including any modified copies made
 * under this license, is not distributed for a fee, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE MASSACHUSETTS INSTITUTE OF TECHNOLOGY BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 * Except as contained in this notice, the name of the Massachusetts
 * Institute of Technology shall not be used in advertising or otherwise
 * to promote the sale, use or other dealings in this Software without
 * prior written authorization from the Massachusetts Institute of
 * Technology.
 *  
 */

/* This file has been automatically generated --- DO NOT EDIT */

#include <fftw.h>
#include "konst.h"

/* Generated by $Id$ */

/* This function contains 144 FP additions and 24 FP multiplications */

void fftwi_no_twiddle_16(const FFTW_COMPLEX *in, FFTW_COMPLEX *out, int istride, int ostride)
{
     FFTW_REAL tre0_0_0;
     FFTW_REAL tim0_0_0;
     FFTW_REAL tre0_0_1;
     FFTW_REAL tim0_0_1;
     FFTW_REAL tre0_0_2;
     FFTW_REAL tim0_0_2;
     FFTW_REAL tre0_0_3;
     FFTW_REAL tim0_0_3;
     FFTW_REAL tre0_1_0;
     FFTW_REAL tim0_1_0;
     FFTW_REAL tre0_1_1;
     FFTW_REAL tim0_1_1;
     FFTW_REAL tre0_1_2;
     FFTW_REAL tim0_1_2;
     FFTW_REAL tre0_1_3;
     FFTW_REAL tim0_1_3;
     FFTW_REAL tre0_2_0;
     FFTW_REAL tim0_2_0;
     FFTW_REAL tre0_2_1;
     FFTW_REAL tim0_2_1;
     FFTW_REAL tre0_2_2;
     FFTW_REAL tim0_2_2;
     FFTW_REAL tre0_2_3;
     FFTW_REAL tim0_2_3;
     FFTW_REAL tre0_3_0;
     FFTW_REAL tim0_3_0;
     FFTW_REAL tre0_3_1;
     FFTW_REAL tim0_3_1;
     FFTW_REAL tre0_3_2;
     FFTW_REAL tim0_3_2;
     FFTW_REAL tre0_3_3;
     FFTW_REAL tim0_3_3;
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[0]);
	       tim2_0_0 = c_im(in[0]);
	       tre2_1_0 = c_re(in[8 * istride]);
	       tim2_1_0 = c_im(in[8 * istride]);
	       tre1_0_0 = tre2_0_0 + tre2_1_0;
	       tim1_0_0 = tim2_0_0 + tim2_1_0;
	       tre1_1_0 = tre2_0_0 - tre2_1_0;
	       tim1_1_0 = tim2_0_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[4 * istride]);
	       tim2_0_0 = c_im(in[4 * istride]);
	       tre2_1_0 = c_re(in[12 * istride]);
	       tim2_1_0 = c_im(in[12 * istride]);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  tre0_0_0 = tre1_0_0 + tre1_0_1;
	  tim0_0_0 = tim1_0_0 + tim1_0_1;
	  tre0_2_0 = tre1_0_0 - tre1_0_1;
	  tim0_2_0 = tim1_0_0 - tim1_0_1;
	  tre0_1_0 = tre1_1_0 - tim1_1_1;
	  tim0_1_0 = tim1_1_0 + tre1_1_1;
	  tre0_3_0 = tre1_1_0 + tim1_1_1;
	  tim0_3_0 = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[istride]);
	       tim2_0_0 = c_im(in[istride]);
	       tre2_1_0 = c_re(in[9 * istride]);
	       tim2_1_0 = c_im(in[9 * istride]);
	       tre1_0_0 = tre2_0_0 + tre2_1_0;
	       tim1_0_0 = tim2_0_0 + tim2_1_0;
	       tre1_1_0 = tre2_0_0 - tre2_1_0;
	       tim1_1_0 = tim2_0_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[5 * istride]);
	       tim2_0_0 = c_im(in[5 * istride]);
	       tre2_1_0 = c_re(in[13 * istride]);
	       tim2_1_0 = c_im(in[13 * istride]);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  tre0_0_1 = tre1_0_0 + tre1_0_1;
	  tim0_0_1 = tim1_0_0 + tim1_0_1;
	  tre0_2_1 = tre1_0_0 - tre1_0_1;
	  tim0_2_1 = tim1_0_0 - tim1_0_1;
	  tre0_1_1 = tre1_1_0 - tim1_1_1;
	  tim0_1_1 = tim1_1_0 + tre1_1_1;
	  tre0_3_1 = tre1_1_0 + tim1_1_1;
	  tim0_3_1 = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[2 * istride]);
	       tim2_0_0 = c_im(in[2 * istride]);
	       tre2_1_0 = c_re(in[10 * istride]);
	       tim2_1_0 = c_im(in[10 * istride]);
	       tre1_0_0 = tre2_0_0 + tre2_1_0;
	       tim1_0_0 = tim2_0_0 + tim2_1_0;
	       tre1_1_0 = tre2_0_0 - tre2_1_0;
	       tim1_1_0 = tim2_0_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[6 * istride]);
	       tim2_0_0 = c_im(in[6 * istride]);
	       tre2_1_0 = c_re(in[14 * istride]);
	       tim2_1_0 = c_im(in[14 * istride]);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  tre0_0_2 = tre1_0_0 + tre1_0_1;
	  tim0_0_2 = tim1_0_0 + tim1_0_1;
	  tre0_2_2 = tre1_0_0 - tre1_0_1;
	  tim0_2_2 = tim1_0_0 - tim1_0_1;
	  tre0_1_2 = tre1_1_0 - tim1_1_1;
	  tim0_1_2 = tim1_1_0 + tre1_1_1;
	  tre0_3_2 = tre1_1_0 + tim1_1_1;
	  tim0_3_2 = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[3 * istride]);
	       tim2_0_0 = c_im(in[3 * istride]);
	       tre2_1_0 = c_re(in[11 * istride]);
	       tim2_1_0 = c_im(in[11 * istride]);
	       tre1_0_0 = tre2_0_0 + tre2_1_0;
	       tim1_0_0 = tim2_0_0 + tim2_1_0;
	       tre1_1_0 = tre2_0_0 - tre2_1_0;
	       tim1_1_0 = tim2_0_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = c_re(in[7 * istride]);
	       tim2_0_0 = c_im(in[7 * istride]);
	       tre2_1_0 = c_re(in[15 * istride]);
	       tim2_1_0 = c_im(in[15 * istride]);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  tre0_0_3 = tre1_0_0 + tre1_0_1;
	  tim0_0_3 = tim1_0_0 + tim1_0_1;
	  tre0_2_3 = tre1_0_0 - tre1_0_1;
	  tim0_2_3 = tim1_0_0 - tim1_0_1;
	  tre0_1_3 = tre1_1_0 - tim1_1_1;
	  tim0_1_3 = tim1_1_0 + tre1_1_1;
	  tre0_3_3 = tre1_1_0 + tim1_1_1;
	  tim0_3_3 = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  tre1_0_0 = tre0_0_0 + tre0_0_2;
	  tim1_0_0 = tim0_0_0 + tim0_0_2;
	  tre1_1_0 = tre0_0_0 - tre0_0_2;
	  tim1_1_0 = tim0_0_0 - tim0_0_2;
	  tre1_0_1 = tre0_0_1 + tre0_0_3;
	  tim1_0_1 = tim0_0_1 + tim0_0_3;
	  tre1_1_1 = tre0_0_1 - tre0_0_3;
	  tim1_1_1 = tim0_0_1 - tim0_0_3;
	  c_re(out[0]) = tre1_0_0 + tre1_0_1;
	  c_im(out[0]) = tim1_0_0 + tim1_0_1;
	  c_re(out[8 * ostride]) = tre1_0_0 - tre1_0_1;
	  c_im(out[8 * ostride]) = tim1_0_0 - tim1_0_1;
	  c_re(out[4 * ostride]) = tre1_1_0 - tim1_1_1;
	  c_im(out[4 * ostride]) = tim1_1_0 + tre1_1_1;
	  c_re(out[12 * ostride]) = tre1_1_0 + tim1_1_1;
	  c_im(out[12 * ostride]) = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_1_2 - tim0_1_2);
	       tim2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tim0_1_2 + tre0_1_2);
	       tre1_0_0 = tre0_1_0 + tre2_1_0;
	       tim1_0_0 = tim0_1_0 + tim2_1_0;
	       tre1_1_0 = tre0_1_0 - tre2_1_0;
	       tim1_1_0 = tim0_1_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = (((FFTW_REAL) FFTW_K923879532) * tre0_1_1) - (((FFTW_REAL) FFTW_K382683432) * tim0_1_1);
	       tim2_0_0 = (((FFTW_REAL) FFTW_K923879532) * tim0_1_1) + (((FFTW_REAL) FFTW_K382683432) * tre0_1_1);
	       tre2_1_0 = (((FFTW_REAL) FFTW_K382683432) * tre0_1_3) - (((FFTW_REAL) FFTW_K923879532) * tim0_1_3);
	       tim2_1_0 = (((FFTW_REAL) FFTW_K382683432) * tim0_1_3) + (((FFTW_REAL) FFTW_K923879532) * tre0_1_3);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  c_re(out[ostride]) = tre1_0_0 + tre1_0_1;
	  c_im(out[ostride]) = tim1_0_0 + tim1_0_1;
	  c_re(out[9 * ostride]) = tre1_0_0 - tre1_0_1;
	  c_im(out[9 * ostride]) = tim1_0_0 - tim1_0_1;
	  c_re(out[5 * ostride]) = tre1_1_0 - tim1_1_1;
	  c_im(out[5 * ostride]) = tim1_1_0 + tre1_1_1;
	  c_re(out[13 * ostride]) = tre1_1_0 + tim1_1_1;
	  c_im(out[13 * ostride]) = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  tre1_0_0 = tre0_2_0 - tim0_2_2;
	  tim1_0_0 = tim0_2_0 + tre0_2_2;
	  tre1_1_0 = tre0_2_0 + tim0_2_2;
	  tim1_1_0 = tim0_2_0 - tre0_2_2;
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_2_1 - tim0_2_1);
	       tim2_0_0 = ((FFTW_REAL) FFTW_K707106781) * (tim0_2_1 + tre0_2_1);
	       tre2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_2_3 + tim0_2_3);
	       tim2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_2_3 - tim0_2_3);
	       tre1_0_1 = tre2_0_0 - tre2_1_0;
	       tim1_0_1 = tim2_0_0 + tim2_1_0;
	       tre1_1_1 = tre2_0_0 + tre2_1_0;
	       tim1_1_1 = tim2_0_0 - tim2_1_0;
	  }
	  c_re(out[2 * ostride]) = tre1_0_0 + tre1_0_1;
	  c_im(out[2 * ostride]) = tim1_0_0 + tim1_0_1;
	  c_re(out[10 * ostride]) = tre1_0_0 - tre1_0_1;
	  c_im(out[10 * ostride]) = tim1_0_0 - tim1_0_1;
	  c_re(out[6 * ostride]) = tre1_1_0 - tim1_1_1;
	  c_im(out[6 * ostride]) = tim1_1_0 + tre1_1_1;
	  c_re(out[14 * ostride]) = tre1_1_0 + tim1_1_1;
	  c_im(out[14 * ostride]) = tim1_1_0 - tre1_1_1;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_0_1;
	  FFTW_REAL tim1_0_1;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  FFTW_REAL tre1_1_1;
	  FFTW_REAL tim1_1_1;
	  {
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_3_2 + tim0_3_2);
	       tim2_1_0 = ((FFTW_REAL) FFTW_K707106781) * (tre0_3_2 - tim0_3_2);
	       tre1_0_0 = tre0_3_0 - tre2_1_0;
	       tim1_0_0 = tim0_3_0 + tim2_1_0;
	       tre1_1_0 = tre0_3_0 + tre2_1_0;
	       tim1_1_0 = tim0_3_0 - tim2_1_0;
	  }
	  {
	       FFTW_REAL tre2_0_0;
	       FFTW_REAL tim2_0_0;
	       FFTW_REAL tre2_1_0;
	       FFTW_REAL tim2_1_0;
	       tre2_0_0 = (((FFTW_REAL) FFTW_K382683432) * tre0_3_1) - (((FFTW_REAL) FFTW_K923879532) * tim0_3_1);
	       tim2_0_0 = (((FFTW_REAL) FFTW_K382683432) * tim0_3_1) + (((FFTW_REAL) FFTW_K923879532) * tre0_3_1);
	       tre2_1_0 = (((FFTW_REAL) FFTW_K382683432) * tim0_3_3) - (((FFTW_REAL) FFTW_K923879532) * tre0_3_3);
	       tim2_1_0 = (((FFTW_REAL) FFTW_K923879532) * tim0_3_3) + (((FFTW_REAL) FFTW_K382683432) * tre0_3_3);
	       tre1_0_1 = tre2_0_0 + tre2_1_0;
	       tim1_0_1 = tim2_0_0 - tim2_1_0;
	       tre1_1_1 = tre2_0_0 - tre2_1_0;
	       tim1_1_1 = tim2_0_0 + tim2_1_0;
	  }
	  c_re(out[3 * ostride]) = tre1_0_0 + tre1_0_1;
	  c_im(out[3 * ostride]) = tim1_0_0 + tim1_0_1;
	  c_re(out[11 * ostride]) = tre1_0_0 - tre1_0_1;
	  c_im(out[11 * ostride]) = tim1_0_0 - tim1_0_1;
	  c_re(out[7 * ostride]) = tre1_1_0 - tim1_1_1;
	  c_im(out[7 * ostride]) = tim1_1_0 + tre1_1_1;
	  c_re(out[15 * ostride]) = tre1_1_0 + tim1_1_1;
	  c_im(out[15 * ostride]) = tim1_1_0 - tre1_1_1;
     }
}
