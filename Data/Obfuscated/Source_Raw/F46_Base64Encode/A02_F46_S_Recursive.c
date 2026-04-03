/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A02_F46_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zBW7(unsigned  char *yrD,  int  zye,   char  *pR) {
 const char  *meND =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if   (zye <=  0) {   *pR   = '\0';   return; }
   unsigned   int  TtdH5   =   yrD[0]   << 16 |  (zye   >  1 ?  yrD[1]  <<  8  :   0) |   (zye   >  2  ?   yrD[2] :  0);
 pR[0]  =  meND[(TtdH5  >> 18) &   0x3F];
   pR[1]   =   meND[(TtdH5   >> 12)   &  0x3F];
   pR[2]  =   zye > 1   ?  meND[(TtdH5  >>   6) &   0x3F]   :  '=';
  pR[3] =  zye  >  2  ?   meND[TtdH5  &   0x3F]   :  '=';
   zBW7(yrD  + 3,   zye  -  3, pR +   4);
}

int   main(int argc,   char   *argv[])   {
   if  (argc  <   2)  return   1;
   unsigned  char *yrD =   (unsigned   char  *)argv[1];
   int   zye   =   0;
 while (yrD[zye])   zye++;
   char   pR[400]   =  {0};
 zBW7(yrD,   zye, pR);
  printf("%s\n",  pR);
  return 0;
}