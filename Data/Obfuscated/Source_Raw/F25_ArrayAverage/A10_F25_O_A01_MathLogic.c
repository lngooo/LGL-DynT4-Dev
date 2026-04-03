/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A10_F25_O_A01_MathLogic.c
 * Implementation Logic: MathLogic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   JYC9(int  E[], int cR) {
   if  (cR <=  0)  return   0.0;
  double k  =  0;
 for (int  mHE =   0; mHE   <   cR;   mHE++) k +=   (E[mHE]   *  1.0);
   return  (k *  pow(cR, -1));
}

int   main(int  argc,   char *argv[])   {
  if (argc  < 2)   return   0;
   int  cR =   argc   -  1;
 int *E =   (int *)malloc(cR *  sizeof(int));
 for   (int  mHE  =   0;   mHE  < cR; mHE++) E[mHE]  =  atoi(argv[mHE + 1]);

  double   K  =   JYC9(E,  cR);
 printf("%.2f\n",   K);

  free(E);
 return  0;
}