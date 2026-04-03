/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A20_F46_O_A04_BitNot.c
 * Implementation Logic: BitNot
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   HcQe2(unsigned   char   *x,  int   QLN2, char *vO) {
  const   char  *z8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  for(int   leul=0;   leul<QLN2;  leul+=3) {
 int  qpy  =   x[leul];
 vO[(leul/3)*4]   = z8[(qpy   >> 2) &  63];
 int G  = (leul+1   <   QLN2)  ? x[leul+1] : -1;
 vO[(leul/3)*4+1]   =   z8[((qpy   & 3) <<   4)  |   (G  ==   -1   ? 0   : (G   >> 4))];
 int   qwW = (leul+2 <   QLN2)  ? x[leul+2] :   -1;
  if (G !=  -1)   vO[(leul/3)*4+2]  =  z8[((G   &  15)  <<   2)   |   (qwW   ==   -1  ? 0  :   (qwW   >> 6))];
   else vO[(leul/3)*4+2]  =   '=';
 if  (qwW  != -1) vO[(leul/3)*4+3]   = z8[qwW   & 63];
   else  vO[(leul/3)*4+3]   =   '=';
   }
 vO[((QLN2+2)/3)*4]   =  0;
}

int   main(int   argc, char   *argv[])   {
   if (argc  < 2)   return 1;
 unsigned  char   *x =   (unsigned   char  *)argv[1];
  int QLN2  =  0;
   while  (x[QLN2]) QLN2++;
   char   vO[400]  =  {0};
   HcQe2(x,   QLN2,   vO);
 printf("%s\n", vO);
  return   0;
}