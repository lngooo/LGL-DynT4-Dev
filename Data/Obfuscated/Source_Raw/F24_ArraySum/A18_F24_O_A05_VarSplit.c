/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A18_F24_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   Swc(int   bsb[],  int HKw)   {
 int Qy =  0,  EW  =  0;
 for  (int lhD  =   0;   lhD < HKw; lhD++) {
 if   (lhD   % 2 ==  0)   Qy  +=   bsb[lhD];
 else EW  +=  bsb[lhD];
 }
   return   Qy + EW;
}

int main(int argc,   char   *argv[]) {
 if  (argc  < 2) return  0;
   int HKw =  argc  - 1;
 int   *bsb =   (int  *)malloc(HKw  *   sizeof(int));
 for  (int  lhD  =  0;   lhD  <  HKw;   lhD++) bsb[lhD]   =   atoi(argv[lhD  +   1]);

 int qh =   Swc(bsb,  HKw);
   printf("%d\n",   qh);

   free(bsb);
  return   0;
}