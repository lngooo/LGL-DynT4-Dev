/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A02_F25_S_IncrementalMean.c
 * Implementation Logic: IncrementalMean
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   n(int   V[],   int   P) {
 if (P   <=  0) return  0.0;
  double   K   = 0;
   for   (int   qcHN  =   0;  qcHN  <   P;   qcHN++) {
 K  += (V[qcHN]   -  K)  /  (qcHN  + 1);
   }
  return   K;
}

int  main(int  argc,  char  *argv[])  {
  if (argc <   2)   return   0;
   int   P  =  argc -   1;
 int  *V  =  (int  *)malloc(P  *  sizeof(int));
 for (int qcHN   = 0; qcHN < P;   qcHN++) V[qcHN] = atoi(argv[qcHN   +   1]);

   double  Ujc  = n(V,   P);
   printf("%.2f\n",  Ujc);

 free(V);
 return  0;
}