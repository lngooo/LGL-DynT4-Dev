/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A12_F03_S_GammaApprox.c
 * Implementation Logic: Approximating via math logic (Seed 6). Floored for consistency.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  long Fa4(int  wts7)  {
   if  (wts7  <  0)   return   0;
   if  (wts7 == 0)   return 1;
 double   JQu8  =   1.0;
  for(int   DEo =   1; DEo   <=  wts7;  DEo++)  JQu8  *=  DEo;
  return   (long long)floor(JQu8   +   0.5);
}

int   main(int argc,  char   *argv[])   {
 if   (argc   <   2)  return   1;
  printf("%lld\n",   Fa4(atoi(argv[1])));
  return 0;
}