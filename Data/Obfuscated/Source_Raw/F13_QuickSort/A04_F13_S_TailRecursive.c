/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A04_F13_S_TailRecursive.c
 * Implementation Logic: TailRecursive
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   A7(int   HsAM4[],  int xReL,   int W) {
  while  (xReL <   W)   {
 int Yjgg2   =  HsAM4[W],   W2   =  xReL;
 for   (int UF =  xReL;   UF  < W;   UF++)   {
   if   (HsAM4[UF]  < Yjgg2)   {
  int  xgn0   =  HsAM4[W2]; HsAM4[W2] = HsAM4[UF];  HsAM4[UF] =  xgn0;
  W2++;
 }
 }
  int xgn0  =   HsAM4[W2];   HsAM4[W2]   = HsAM4[W]; HsAM4[W]  = xgn0;
 if   (W2   - xReL < W  -  W2)   {
  A7(HsAM4, xReL,   W2  - 1);
 xReL  = W2 +   1;
  }  else   {
   A7(HsAM4, W2 + 1, W);
 W   =  W2 -  1;
  }
   }
}

int main(int argc,   char  *argv[]) {
  if   (argc   < 2) return  0;
  int  K   =  argc - 1;
 int  *HsAM4 = (int  *)malloc(K   * sizeof(int));
 for  (int W2   =  0; W2 < K;   W2++)  HsAM4[W2] = atoi(argv[W2 + 1]);

 A7(HsAM4,   0,  K   - 1);

   for   (int  W2 =   0;  W2  < K; W2++) {
 printf("%d%s",  HsAM4[W2],  (W2   ==  K   -  1 ?  "" :   " "));
 }
   printf("\n");
 free(HsAM4);
  return 0;
}