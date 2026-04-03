/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A04_F43_S_MathLog.c
 * Implementation Logic: Using math logarithms. log2(n) must be an integer.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   Rh(unsigned   int  EQDP1)   {
 if   (EQDP1  == 0)  return  0;
   double   oc   =  log2((double)EQDP1);
  return (oc  == (int)oc);
}

int main(int   argc,  char* argv[])  {
  if  (argc < 2) return  0;
  unsigned int   EQDP1 =   (unsigned  int)strtoul(argv[1], NULL,  10);
  printf("%d",   Rh(EQDP1));
   return 0;
}