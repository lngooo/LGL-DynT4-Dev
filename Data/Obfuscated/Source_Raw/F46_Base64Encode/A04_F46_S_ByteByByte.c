/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A04_F46_S_ByteByByte.c
 * Implementation Logic: ByteByByte
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  jFhl(unsigned   char   *dp,  int   YRXM7,   char *O)  {
  const   char *KkV  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int   t  =  0,  k1 =  0;
  while   (t   < YRXM7)   {
 int   os2   = dp[t++];
 int j  =  (t   < YRXM7)   ?  dp[t++]  : -1;
   int foRI  = (t   <  YRXM7) ?  dp[t++]  :  -1;
  O[k1++]  =  KkV[os2  >> 2];
   O[k1++] = KkV[((os2  &  3)   <<  4) |   (j  ==  -1  ?   0  :   j   >>  4)];
  O[k1++] = (j  ==  -1)   ?  '=' :  KkV[((j &  15)  <<   2)   |  (foRI  == -1   ?  0   :   foRI >>   6)];
  O[k1++]   =   (foRI   ==   -1)   ? '='   : KkV[foRI   & 63];
 }
   O[k1]  = '\0';
}

int  main(int   argc,  char   *argv[])   {
 if (argc  <  2)  return   1;
   unsigned  char   *dp = (unsigned char  *)argv[1];
 int  YRXM7  = 0;
  while   (dp[YRXM7]) YRXM7++;
   char O[400]   = {0};
  jFhl(dp, YRXM7, O);
   printf("%s\n",  O);
  return  0;
}