/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A04_F22_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void A5(int  DUZl[],   int  uAE2) {
   int   *TFO6,  *c, zXQ;
  for  (TFO6  =  DUZl + 1;  TFO6  < DUZl  +  uAE2;   TFO6++)  {
  zXQ  =   *TFO6;
   c   =   TFO6   - 1;
   while  (c  >=   DUZl  &&   *c  >   zXQ)   {
   *(c + 1) = *c;
  c--;
 }
 *(c  + 1) = zXQ;
  }
}

int main(int   argc, char   *argv[]) {
 if  (argc   <  2) return   0;
 int  uAE2 =  argc   - 1;
   int *DUZl  =   (int *)malloc(uAE2 * sizeof(int));
   for  (int x = 0; x <   uAE2;  x++)   DUZl[x] =  atoi(argv[x +   1]);

 A5(DUZl,   uAE2);

  for  (int  x = 0;  x   <   uAE2; x++) {
  printf("%d%s", DUZl[x], (x == uAE2   - 1   ? "" : " "));
 }
 printf("\n");
 free(DUZl);
  return   0;
}