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

/* This function contains 208 FP additions and 72 FP multiplications */

void fftwi_no_twiddle_14(const FFTW_COMPLEX *in, FFTW_COMPLEX *out, int istride, int ostride)
{
     FFTW_REAL tre0_0_0;
     FFTW_REAL tim0_0_0;
     FFTW_REAL tre0_0_1;
     FFTW_REAL tim0_0_1;
     FFTW_REAL tre0_0_2;
     FFTW_REAL tim0_0_2;
     FFTW_REAL tre0_0_3;
     FFTW_REAL tim0_0_3;
     FFTW_REAL tre0_0_4;
     FFTW_REAL tim0_0_4;
     FFTW_REAL tre0_0_5;
     FFTW_REAL tim0_0_5;
     FFTW_REAL tre0_0_6;
     FFTW_REAL tim0_0_6;
     FFTW_REAL tre0_1_0;
     FFTW_REAL tim0_1_0;
     FFTW_REAL tre0_1_1;
     FFTW_REAL tim0_1_1;
     FFTW_REAL tre0_1_2;
     FFTW_REAL tim0_1_2;
     FFTW_REAL tre0_1_3;
     FFTW_REAL tim0_1_3;
     FFTW_REAL tre0_1_4;
     FFTW_REAL tim0_1_4;
     FFTW_REAL tre0_1_5;
     FFTW_REAL tim0_1_5;
     FFTW_REAL tre0_1_6;
     FFTW_REAL tim0_1_6;
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[0]);
	  tim1_0_0 = c_im(in[0]);
	  tre1_1_0 = c_re(in[7 * istride]);
	  tim1_1_0 = c_im(in[7 * istride]);
	  tre0_0_0 = tre1_0_0 + tre1_1_0;
	  tim0_0_0 = tim1_0_0 + tim1_1_0;
	  tre0_1_0 = tre1_0_0 - tre1_1_0;
	  tim0_1_0 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[2 * istride]);
	  tim1_0_0 = c_im(in[2 * istride]);
	  tre1_1_0 = c_re(in[9 * istride]);
	  tim1_1_0 = c_im(in[9 * istride]);
	  tre0_0_1 = tre1_0_0 + tre1_1_0;
	  tim0_0_1 = tim1_0_0 + tim1_1_0;
	  tre0_1_1 = tre1_0_0 - tre1_1_0;
	  tim0_1_1 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[4 * istride]);
	  tim1_0_0 = c_im(in[4 * istride]);
	  tre1_1_0 = c_re(in[11 * istride]);
	  tim1_1_0 = c_im(in[11 * istride]);
	  tre0_0_2 = tre1_0_0 + tre1_1_0;
	  tim0_0_2 = tim1_0_0 + tim1_1_0;
	  tre0_1_2 = tre1_0_0 - tre1_1_0;
	  tim0_1_2 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[6 * istride]);
	  tim1_0_0 = c_im(in[6 * istride]);
	  tre1_1_0 = c_re(in[13 * istride]);
	  tim1_1_0 = c_im(in[13 * istride]);
	  tre0_0_3 = tre1_0_0 + tre1_1_0;
	  tim0_0_3 = tim1_0_0 + tim1_1_0;
	  tre0_1_3 = tre1_0_0 - tre1_1_0;
	  tim0_1_3 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[8 * istride]);
	  tim1_0_0 = c_im(in[8 * istride]);
	  tre1_1_0 = c_re(in[istride]);
	  tim1_1_0 = c_im(in[istride]);
	  tre0_0_4 = tre1_0_0 + tre1_1_0;
	  tim0_0_4 = tim1_0_0 + tim1_1_0;
	  tre0_1_4 = tre1_0_0 - tre1_1_0;
	  tim0_1_4 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[10 * istride]);
	  tim1_0_0 = c_im(in[10 * istride]);
	  tre1_1_0 = c_re(in[3 * istride]);
	  tim1_1_0 = c_im(in[3 * istride]);
	  tre0_0_5 = tre1_0_0 + tre1_1_0;
	  tim0_0_5 = tim1_0_0 + tim1_1_0;
	  tre0_1_5 = tre1_0_0 - tre1_1_0;
	  tim0_1_5 = tim1_0_0 - tim1_1_0;
     }
     {
	  FFTW_REAL tre1_0_0;
	  FFTW_REAL tim1_0_0;
	  FFTW_REAL tre1_1_0;
	  FFTW_REAL tim1_1_0;
	  tre1_0_0 = c_re(in[12 * istride]);
	  tim1_0_0 = c_im(in[12 * istride]);
	  tre1_1_0 = c_re(in[5 * istride]);
	  tim1_1_0 = c_im(in[5 * istride]);
	  tre0_0_6 = tre1_0_0 + tre1_1_0;
	  tim0_0_6 = tim1_0_0 + tim1_1_0;
	  tre0_1_6 = tre1_0_0 - tre1_1_0;
	  tim0_1_6 = tim1_0_0 - tim1_1_0;
     }
     c_re(out[0]) = tre0_0_0 + tre0_0_1 + tre0_0_2 + tre0_0_3 + tre0_0_4 + tre0_0_5 + tre0_0_6;
     c_im(out[0]) = tim0_0_0 + tim0_0_1 + tim0_0_2 + tim0_0_3 + tim0_0_4 + tim0_0_5 + tim0_0_6;
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_0_1 + tre0_0_6)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_0_3 + tre0_0_4)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_0_2 + tre0_0_5));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K781831482) * (tim0_0_6 - tim0_0_1)) + (((FFTW_REAL) FFTW_K974927912) * (tim0_0_5 - tim0_0_2)) + (((FFTW_REAL) FFTW_K433883739) * (tim0_0_4 - tim0_0_3));
	  c_re(out[8 * ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[6 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_0_1 + tim0_0_6)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_0_3 + tim0_0_4)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_0_2 + tim0_0_5));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K781831482) * (tre0_0_1 - tre0_0_6)) + (((FFTW_REAL) FFTW_K974927912) * (tre0_0_2 - tre0_0_5)) + (((FFTW_REAL) FFTW_K433883739) * (tre0_0_3 - tre0_0_4));
	  c_im(out[8 * ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[6 * ostride]) = tim2_0_0 - tim2_1_0;
     }
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_0_3 + tre0_0_4)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_0_2 + tre0_0_5)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_0_1 + tre0_0_6));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K974927912) * (tim0_0_6 - tim0_0_1)) + (((FFTW_REAL) FFTW_K433883739) * (tim0_0_2 - tim0_0_5)) + (((FFTW_REAL) FFTW_K781831482) * (tim0_0_3 - tim0_0_4));
	  c_re(out[2 * ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[12 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_0_3 + tim0_0_4)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_0_2 + tim0_0_5)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_0_1 + tim0_0_6));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K974927912) * (tre0_0_1 - tre0_0_6)) + (((FFTW_REAL) FFTW_K433883739) * (tre0_0_5 - tre0_0_2)) + (((FFTW_REAL) FFTW_K781831482) * (tre0_0_4 - tre0_0_3));
	  c_im(out[2 * ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[12 * ostride]) = tim2_0_0 - tim2_1_0;
     }
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_0_2 + tre0_0_5)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_0_3 + tre0_0_4)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_0_1 + tre0_0_6));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K433883739) * (tim0_0_6 - tim0_0_1)) + (((FFTW_REAL) FFTW_K781831482) * (tim0_0_2 - tim0_0_5)) + (((FFTW_REAL) FFTW_K974927912) * (tim0_0_4 - tim0_0_3));
	  c_re(out[10 * ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[4 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_0_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_0_2 + tim0_0_5)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_0_3 + tim0_0_4)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_0_1 + tim0_0_6));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K433883739) * (tre0_0_1 - tre0_0_6)) + (((FFTW_REAL) FFTW_K781831482) * (tre0_0_5 - tre0_0_2)) + (((FFTW_REAL) FFTW_K974927912) * (tre0_0_3 - tre0_0_4));
	  c_im(out[10 * ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[4 * ostride]) = tim2_0_0 - tim2_1_0;
     }
     c_re(out[7 * ostride]) = tre0_1_0 + tre0_1_1 + tre0_1_2 + tre0_1_3 + tre0_1_4 + tre0_1_5 + tre0_1_6;
     c_im(out[7 * ostride]) = tim0_1_0 + tim0_1_1 + tim0_1_2 + tim0_1_3 + tim0_1_4 + tim0_1_5 + tim0_1_6;
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_1_1 + tre0_1_6)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_1_3 + tre0_1_4)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_1_2 + tre0_1_5));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K781831482) * (tim0_1_6 - tim0_1_1)) + (((FFTW_REAL) FFTW_K974927912) * (tim0_1_5 - tim0_1_2)) + (((FFTW_REAL) FFTW_K433883739) * (tim0_1_4 - tim0_1_3));
	  c_re(out[ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[13 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_1_1 + tim0_1_6)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_1_3 + tim0_1_4)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_1_2 + tim0_1_5));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K781831482) * (tre0_1_1 - tre0_1_6)) + (((FFTW_REAL) FFTW_K974927912) * (tre0_1_2 - tre0_1_5)) + (((FFTW_REAL) FFTW_K433883739) * (tre0_1_3 - tre0_1_4));
	  c_im(out[ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[13 * ostride]) = tim2_0_0 - tim2_1_0;
     }
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_1_3 + tre0_1_4)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_1_2 + tre0_1_5)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_1_1 + tre0_1_6));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K974927912) * (tim0_1_6 - tim0_1_1)) + (((FFTW_REAL) FFTW_K433883739) * (tim0_1_2 - tim0_1_5)) + (((FFTW_REAL) FFTW_K781831482) * (tim0_1_3 - tim0_1_4));
	  c_re(out[9 * ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[5 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_1_3 + tim0_1_4)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_1_2 + tim0_1_5)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_1_1 + tim0_1_6));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K974927912) * (tre0_1_1 - tre0_1_6)) + (((FFTW_REAL) FFTW_K433883739) * (tre0_1_5 - tre0_1_2)) + (((FFTW_REAL) FFTW_K781831482) * (tre0_1_4 - tre0_1_3));
	  c_im(out[9 * ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[5 * ostride]) = tim2_0_0 - tim2_1_0;
     }
     {
	  FFTW_REAL tre2_0_0;
	  FFTW_REAL tre2_1_0;
	  tre2_0_0 = tre0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tre0_1_2 + tre0_1_5)) - (((FFTW_REAL) FFTW_K222520933) * (tre0_1_3 + tre0_1_4)) - (((FFTW_REAL) FFTW_K900968867) * (tre0_1_1 + tre0_1_6));
	  tre2_1_0 = (((FFTW_REAL) FFTW_K433883739) * (tim0_1_6 - tim0_1_1)) + (((FFTW_REAL) FFTW_K781831482) * (tim0_1_2 - tim0_1_5)) + (((FFTW_REAL) FFTW_K974927912) * (tim0_1_4 - tim0_1_3));
	  c_re(out[3 * ostride]) = tre2_0_0 + tre2_1_0;
	  c_re(out[11 * ostride]) = tre2_0_0 - tre2_1_0;
     }
     {
	  FFTW_REAL tim2_0_0;
	  FFTW_REAL tim2_1_0;
	  tim2_0_0 = tim0_1_0 + (((FFTW_REAL) FFTW_K623489801) * (tim0_1_2 + tim0_1_5)) - (((FFTW_REAL) FFTW_K222520933) * (tim0_1_3 + tim0_1_4)) - (((FFTW_REAL) FFTW_K900968867) * (tim0_1_1 + tim0_1_6));
	  tim2_1_0 = (((FFTW_REAL) FFTW_K433883739) * (tre0_1_1 - tre0_1_6)) + (((FFTW_REAL) FFTW_K781831482) * (tre0_1_5 - tre0_1_2)) + (((FFTW_REAL) FFTW_K974927912) * (tre0_1_3 - tre0_1_4));
	  c_im(out[3 * ostride]) = tim2_0_0 + tim2_1_0;
	  c_im(out[11 * ostride]) = tim2_0_0 - tim2_1_0;
     }
}
