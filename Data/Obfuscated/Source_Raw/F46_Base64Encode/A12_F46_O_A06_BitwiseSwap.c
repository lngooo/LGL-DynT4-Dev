/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A12_F46_O_A06_BitwiseSwap.c
 * Implementation Logic: BitwiseSwap
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  ERU(unsigned   char   *DwOf, int T,   char *e)   {
  const  char   *fYH  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int  ZhG=0;  ZhG<T; ZhG+=3) {
   unsigned  int  q9   =   (DwOf[ZhG] <<  16)  ^  ((ZhG+1<T?DwOf[ZhG+1]:0)  <<  8)   ^ (ZhG+2<T?DwOf[ZhG+2]:0);
 e[(ZhG/3)*4]  = fYH[(q9 >> 18) &   63];
 e[(ZhG/3)*4+1]  =   fYH[(q9   >>  12)  & 63];
   e[(ZhG/3)*4+2]   = (ZhG+1   <  T)   ?   fYH[(q9  >> 6) & 63]  :  '=';
   e[(ZhG/3)*4+3]  =  (ZhG+2 <   T)  ?   fYH[q9  &   63] :  '=';
   }
   e[((T+2)/3)*4]  =   0;
}

int  main(int argc,   char  *argv[]) {
   if (argc  <   2)   return 1;
 unsigned  char  *DwOf  =  (unsigned   char  *)argv[1];
  int T  =  0;
   while (DwOf[T]) T++;
   char e[400]  = {0};
   ERU(DwOf,  T,  e);
   printf("%s\n",   e);
   return  0;
}