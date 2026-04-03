/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A06_F15_S_PointerArithmetic.c
 * Implementation Logic: Linear scan using pure pointer arithmetic (Seed 3).
 */


#include <stdio.h>
#include <stdlib.h>

int  q(int X[],   int uO) {
 if   (uO   <= 0)  return   0;
 int  *V2  = X;
   int  R9  =  *V2;
 for (int  M =   1;   M   <  uO;  M++) {
  V2++;
   if  (*V2  >   R9)   R9   =   *V2;
 }
  return R9;
}

int main(int  argc,  char  *argv[]) {
 if (argc < 2)   return  0;
   int   uO =   argc  -   1;
   int *X =   (int*)malloc(uO  *   sizeof(int));
  for (int M   =  0;   M  <  uO;  M++) X[M] =   atoi(argv[M+1]);
 printf("%d\n",  q(X, uO));
   free(X);
   return 0;
}