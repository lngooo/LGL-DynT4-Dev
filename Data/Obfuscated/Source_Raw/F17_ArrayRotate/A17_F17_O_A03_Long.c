/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A17_F17_O_A03_Long.c
 * Logic: Auxiliary seed using long long for address calculation.
 */


#include <stdio.h>
#include <stdlib.h>

void  z(int   bK[], int  LUE,  int mH)   {
  if  (LUE  == 0)   return;
  long  long Zt =  LUE,   A   =  mH  % LUE;
   int   *Lcs =  malloc(A *   sizeof(int));
   for(long long  WTR=0; WTR<A; WTR++)   Lcs[WTR]   =  *(bK   + WTR);
 for(long   long  WTR=0;   WTR<Zt-A; WTR++)   *(bK + WTR)   = *(bK  + WTR   +   A);
 for(long   long  WTR=0;   WTR<A; WTR++)   *(bK +   Zt  - A + WTR) =  Lcs[WTR];
   free(Lcs);
}

int  main(int   argc, char   *argv[]) {
  if   (argc   <   3)   return  0;
  int  mH  = atoi(argv[1]);
 int  LUE   =   argc  - 2;
   int  *bK   = (int*)malloc(LUE * sizeof(int));
   for(int  WTR=0;  WTR<LUE;   WTR++)   bK[WTR]   =   atoi(argv[WTR+2]);
  z(bK,  LUE,  mH);
 for(int  WTR=0;  WTR<LUE; WTR++)   printf("%d ",  bK[WTR]);
   printf("\n");
  free(bK);
  return   0;
}