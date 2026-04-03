/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A06_F08_S_MathSqrt.c
 * Implementation Logic: sqrt(n^2) approach (Seed 3).
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   F(int  A1) {
   double  kD  = (double)A1;
 return  (int)sqrt(kD   *  kD);
}

int  main(int  argc,   char  *argv[])  {
  if   (argc < 2)  return 1;
  printf("%d\n", F(atoi(argv[1])));
   return 0;
}