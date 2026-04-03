/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A03_F42_S_Kernighan.c
 * Implementation Logic: Uses Brian Kernighan's algorithm (n & (n-1)) on the XOR result for efficiency.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int f(unsigned int   Um6, unsigned  int   j)   {
   unsigned   int   SZuQ   =   Um6 ^  j;
  int  W = 0;
  while   (SZuQ) {
   SZuQ  &=   (SZuQ - 1);
  W++;
   }
   return   W;
}

int   main(int argc, char* argv[])  {
 if   (argc <  3)   return   0;
  unsigned   int RPw  =  (unsigned int)strtoul(argv[1], NULL,  10);
  unsigned int H2 = (unsigned int)strtoul(argv[2],   NULL,  10);
  printf("%d", f(RPw,  H2));
 return 0;
}