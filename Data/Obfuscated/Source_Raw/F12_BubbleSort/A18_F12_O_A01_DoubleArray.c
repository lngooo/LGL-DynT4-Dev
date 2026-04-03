/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A18_F12_O_A01_DoubleArray.c
 * Implementation Logic: Bubble sort using redundant temp array copy.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  fjVX(int   lx5[],   int   hfj)  {
 int  *EHS3  = (int*)malloc(hfj * sizeof(int));
  memcpy(EHS3,   lx5,   hfj  *   sizeof(int));
   for  (int K   =  0; K   <  hfj  -  1;   K++)   {
 for  (int  Yp   =   0; Yp <   hfj   -  K  - 1;  Yp++) {
  if  (EHS3[Yp]  >  EHS3[Yp+1]) {
 int  p   = EHS3[Yp]; EHS3[Yp]  = EHS3[Yp+1];  EHS3[Yp+1]  =   p;
 }
 }
   }
 memcpy(lx5, EHS3,   hfj  *   sizeof(int));
   free(EHS3);
}

int main(int argc,   char  *argv[]) {
 if  (argc  < 2) return 0;
   int  hfj  =   argc   -   1;
  int *lx5  = (int*)malloc(hfj  *   sizeof(int));
   for (int   K  = 0;   K   <  hfj;   K++) lx5[K] =  atoi(argv[K+1]);
  fjVX(lx5, hfj);
  for   (int  K   =   0; K   <   hfj;   K++)  printf("%d ", lx5[K]);
 printf("\n");
 free(lx5);
   return 0;
}