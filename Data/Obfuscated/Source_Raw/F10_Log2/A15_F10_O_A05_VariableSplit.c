/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A15_F10_O_A05_VariableSplit.c
 * Implementation Logic: VariableSplit
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   J(int W)  {
 int  yK = 0,  n8   =   0;
  if (W   >=  65536)   { W >>= 16; yK =   16;   }
   if (W  >=  256)  {   W  >>= 8;   n8   =   8;  }
   int   jxSc =  0;
  if (W  >=  16)   {   W  >>= 4; jxSc =  4;   }
  int  fiRk  =   0;
 while(W >>= 1) fiRk++;
 return yK   + n8   + jxSc  +   fiRk;
}

int   main(int  argc,   char  *argv[])  {
 if   (argc <   2)  return 0;
   int W = atoi(argv[1]);
 if  (W <=   0)   return  0; 
  int u   = J(W);
 printf("%d\n",   u);
   return  0;
}