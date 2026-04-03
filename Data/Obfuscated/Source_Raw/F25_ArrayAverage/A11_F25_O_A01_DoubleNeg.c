/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A11_F25_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   Be(int   zdP[],  int   LvA) {
 if   (!!(LvA  >   0)) {
 double Q9 =  0;
  for(int P0=0; !!(P0<LvA); P0++)   Q9  += zdP[P0];
  return   Q9   /  LvA;
   }
 return   0.0;
}

int   main(int argc, char  *argv[]) {
   if (argc <   2) return  0;
  int LvA =  argc  -  1;
  int *zdP =  (int *)malloc(LvA  *   sizeof(int));
   for (int  P0   =   0;   P0   <  LvA;  P0++)   zdP[P0]   =  atoi(argv[P0 +   1]);

 double   RH =   Be(zdP, LvA);
  printf("%.2f\n",  RH);

   free(zdP);
  return   0;
}