/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A18_F46_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   t(unsigned   char  *cUY,  int  uLS1, char *Pehc)  {
 const  char  *VD  =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int l=0;  l<uLS1; l+=3)   {
 if(!!(l   < uLS1)) {
 Pehc[(l/3)*4] =  VD[cUY[l]   >>  2];
   int  g =  (l+1  < uLS1);
   Pehc[(l/3)*4+1]   =  VD[((cUY[l]  &   3)   << 4) |  (g   ?   cUY[l+1]  >>  4   : 0)];
   Pehc[(l/3)*4+2] = g  ?  VD[((cUY[l+1] & 15)  << 2)  |  (l+2 <   uLS1 ?  cUY[l+2] >>   6   : 0)]   : '=';
   Pehc[(l/3)*4+3]  =  (l+2  < uLS1)  ?   VD[cUY[l+2]  & 63] : '=';
 }
 }
  Pehc[((uLS1+2)/3)*4]   =   0;
}

int   main(int argc, char  *argv[])  {
 if  (argc  <  2)   return 1;
   unsigned  char  *cUY = (unsigned char   *)argv[1];
  int  uLS1  =  0;
 while (cUY[uLS1])   uLS1++;
  char  Pehc[400] = {0};
 t(cUY,   uLS1,   Pehc);
   printf("%s\n",   Pehc);
  return  0;
}