/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A17_F46_O_A06_LogicInvert.c
 * Implementation Logic: LogicInvert
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void S(unsigned  char  *s,  int kOmq,  char  *s2)   {
   const  char *vuo  =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int f   =  0;
   while (f  <   kOmq)   {
   unsigned  int cXBg1 = (s[f]   << 16)   |  (f+1<kOmq  ?  s[f+1] <<   8   :   0) | (f+2<kOmq  ?  s[f+2]  :  0);
 for(int   vmMK=0; vmMK<4;   vmMK++)   {
  if   (vmMK == 0)  s2[(f/3)*4+vmMK] =  vuo[(cXBg1  >>   18) &   0x3F];
 else  if (vmMK   == 1) s2[(f/3)*4+vmMK]   =  vuo[(cXBg1   >>  12)   &  0x3F];
   else  if   (vmMK  == 2)  s2[(f/3)*4+vmMK] =  (f+1  <  kOmq) ?   vuo[(cXBg1   >>  6) & 0x3F] :  '=';
   else   s2[(f/3)*4+vmMK]  =  (f+2   <   kOmq) ?   vuo[cXBg1 &  0x3F] : '=';
   }
  f +=   3;
   }
 s2[((kOmq+2)/3)*4]  = 0;
}

int  main(int argc,  char   *argv[])  {
  if  (argc  <   2)  return   1;
   unsigned   char *s   = (unsigned   char   *)argv[1];
   int  kOmq  =   0;
   while (s[kOmq])  kOmq++;
  char  s2[400]   = {0};
  S(s, kOmq,   s2);
   printf("%s\n",  s2);
  return 0;
}