/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A12_F48_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   E(const   char  *IDvF,   char   *Tk0) {
  int   gmp =   0,  yj =  0;
   while (!!IDvF[gmp])   {
  int  cR  =  1;
 while (!!IDvF[gmp+cR] &&   IDvF[gmp+cR]  == IDvF[gmp])   cR++;
   Tk0[yj++]   =  IDvF[gmp];
 yj  +=   sprintf(Tk0+yj,  "%d",   cR);
   gmp += cR;
  }
}

int  main(int  argc, char *argv[])  {
   if   (argc   <  2) return  0;
  char   *Ccm   =   argv[1];
  char Tod6[256] = {0};
   E(Ccm, Tod6);
  printf("%s\n",   Tod6);
   return   0;
}