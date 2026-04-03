/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A16_F46_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   dl(unsigned  char  *x7,   int  YZT,  char   *Zi)   {
  const   char   *tPQ  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int   NI=0;  NI<((YZT+2)/3)*3;  NI+=3)  {
   int  tD   =   (NI  <   YZT)  ?   x7[NI]  :  0;
   int   TuYa =   (NI+1 <   YZT)   ?   x7[NI+1]   : 0;
   int q  =  (NI+2 <   YZT)  ?   x7[NI+2]  : 0;
 Zi[(NI/3)*4] =   tPQ[tD   >>  2];
   Zi[(NI/3)*4+1]  =   tPQ[((tD &  3)  <<   4)   | (TuYa   >>  4)];
   Zi[(NI/3)*4+2]   =  (NI+1  < YZT)  ?   tPQ[((TuYa  &  15) <<   2)   | (q   >> 6)]  : '=';
   Zi[(NI/3)*4+3]  =   (NI+2  < YZT)  ? tPQ[q  &  63] :  '=';
   }
  Zi[((YZT+2)/3)*4]  =   0;
}

int   main(int argc,   char  *argv[])  {
  if   (argc   < 2) return  1;
   unsigned char *x7  =  (unsigned   char  *)argv[1];
  int YZT  =   0;
 while   (x7[YZT]) YZT++;
 char  Zi[400]  = {0};
  dl(x7,  YZT, Zi);
 printf("%s\n", Zi);
  return   0;
}