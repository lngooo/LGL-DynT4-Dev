/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A15_F46_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Vfci(unsigned char *IKe,  int  Kw0, char  *KRe) {
 const   char *iK1  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int  LC   = 0;
  while(LC   <  Kw0)  {
 int   lU4 = IKe[LC] *  65536  + (LC+1<Kw0?IKe[LC+1]:0)  *  256 +   (LC+2<Kw0?IKe[LC+2]:0);
   KRe[(LC/3)*4]   = iK1[(lU4   /   262144)   %   64];
  KRe[(LC/3)*4+1]  = iK1[(lU4  / 4096)  %   64];
  KRe[(LC/3)*4+2] =   (LC+1   <  Kw0)  ?  iK1[(lU4   / 64) % 64] :  '=';
  KRe[(LC/3)*4+3]   =  (LC+2   <   Kw0)   ?  iK1[lU4   %  64]   :  '=';
   LC += 3;
  }
  KRe[((Kw0+2)/3)*4]   = 0;
}

int main(int  argc,   char *argv[])   {
   if   (argc  <  2)  return 1;
   unsigned  char   *IKe  =  (unsigned char *)argv[1];
  int Kw0   =   0;
  while (IKe[Kw0])  Kw0++;
  char  KRe[400]   = {0};
 Vfci(IKe,   Kw0, KRe);
   printf("%s\n",   KRe);
   return 0;
}