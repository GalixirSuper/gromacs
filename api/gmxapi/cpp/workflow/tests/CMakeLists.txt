#
# This file is part of the GROMACS molecular simulation package.
#
# Copyright (c) 2018,2019,2020,2021, by the GROMACS development team, led by
# Mark Abraham, David van der Spoel, Berk Hess, and Erik Lindahl,
# and including many others, as listed in the AUTHORS file in the
# top-level source directory and at http://www.gromacs.org.
#
# GROMACS is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public License
# as published by the Free Software Foundation; either version 2.1
# of the License, or (at your option) any later version.
#
# GROMACS is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with GROMACS; if not, see
# http://www.gnu.org/licenses, or write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
#
# If you want to redistribute modifications to GROMACS, please
# consider that scientific software is very special. Version
# control is crucial - bugs must be traceable. We will be happy to
# consider code for inclusion in the official distribution, but
# derived work must not be called official GROMACS. Details are found
# in the README & COPYING files - if they are missing, get the
# official version at http://www.gromacs.org.
#
# To help us fund GROMACS development, we humbly ask that you cite
# the research papers on the package. Check out http://www.gromacs.org.

# Test private interface.
#

gmx_add_gtest_executable(workflow-details-test
    CPP_SOURCE_FILES
        workflow.cpp
        # pseudo-library for code for mdrun
        $<TARGET_OBJECTS:mdrun_objlib>
)

target_link_libraries(workflow-details-test
                      PRIVATE
                        Gromacs::gmxapi
                        gmxapi-detail
                        gmxapi-testsupport
                        mdrun_test_infrastructure)

gmx_register_gtest_test(GmxapiInternalInterfaceTests workflow-details-test OPENMP_THREADS 2 INTEGRATION_TEST IGNORE_LEAKS)

set_tests_properties(GmxapiInternalInterfaceTests PROPERTIES
                     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

#
# Test with MPI.
#
# gmxapi is expected to work whether or not GROMACS was built with MPI (or tMPI)
# but we don't assume that MPI is available to the build tree or testing tools
# unless CMake was configured with MPI.
#
# For MPI-enabled testing of gmxapi clients using non-MPI-enabled GROMACS, we
# defer testing to the Python gmxapi client package tests.
#
if (GMX_MPI)
    gmx_add_gtest_executable(workflow-details-mpi-test MPI
                             CPP_SOURCE_FILES
                             workflow.cpp
                             # pseudo-library for code for mdrun
                             $<TARGET_OBJECTS:mdrun_objlib>
                             )

    target_link_libraries(workflow-details-mpi-test
                          PRIVATE
                          Gromacs::gmxapi
                          gmxapi-detail
                          gmxapi-testsupport
                          mdrun_test_infrastructure)

    gmx_register_gtest_test(GmxapiInternalsMpiTests workflow-details-mpi-test MPI_RANKS 2 OPENMP_THREADS 2 INTEGRATION_TEST IGNORE_LEAKS)

    set_tests_properties(GmxapiInternalsMpiTests PROPERTIES
                         WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})
endif ()
