/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A04_F25_S_Recursive.c
 * Implementation Logic: Recursive
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  kj(int  rP[],   int k)   {
  if (k <= 0)  return  0.0;
  if (k   ==   1) return (double)rP[0];
   double   eT   =   kj(rP,  k   -   1);
 return   (eT   *  (k -  1)   +   rP[k  -  1])   /  k;
}

int   main(int   argc,   char   *argv[]) {
   if   (argc <   2)   return 0;
   int   k  =   argc   -  1;
  int  *rP = (int *)malloc(k   * sizeof(int));
   for   (int   exjK4 = 0; exjK4  < k;  exjK4++)  rP[exjK4] =  atoi(argv[exjK4  +   1]);

  double rxZ  = kj(rP,  k);
 printf("%.2f\n", rxZ);

 free(rP);
  return 0;
}