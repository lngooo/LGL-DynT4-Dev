/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A14_F46_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Xd(unsigned char   *ML,  int  LUs,   char   *uMtO1) {
  const char *Kc2  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int   rxZl=0;   rxZl<LUs;  rxZl+=3)  {
   for(int   BcXU3=0;  BcXU3<1; BcXU3++)  {
   int tNI =  ML[rxZl], ct  =   (rxZl+1<LUs)?ML[rxZl+1]:-1,   g4  =  (rxZl+2<LUs)?ML[rxZl+2]:-1;
 uMtO1[(rxZl/3)*4] = Kc2[tNI   >> 2];
   uMtO1[(rxZl/3)*4+1]  = Kc2[((tNI   &  3)  << 4) | (ct  ==   -1   ?   0   :   ct   >>  4)];
  uMtO1[(rxZl/3)*4+2]  =  (ct   ==   -1)  ? '=' :   Kc2[((ct   &  15)  <<   2)   |   (g4   ==   -1 ? 0 : g4 >>   6)];
 uMtO1[(rxZl/3)*4+3]   =  (g4 ==  -1) ?   '='  :   Kc2[g4   & 63];
   }
 }
   uMtO1[((LUs+2)/3)*4] = 0;
}

int main(int  argc,   char *argv[])   {
 if   (argc  <  2)   return   1;
 unsigned   char  *ML  =  (unsigned  char *)argv[1];
  int  LUs   =   0;
 while  (ML[LUs]) LUs++;
   char   uMtO1[400] = {0};
 Xd(ML,   LUs, uMtO1);
 printf("%s\n",  uMtO1);
 return 0;
}