/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A01_F42_S_XorShift.c
 * Implementation Logic: Standard approach using XOR to find differing bits, then counting them via shifting.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  f(unsigned  int  sa0, unsigned int  Ecw8) {
 unsigned int  kHR5   =  sa0   ^   Ecw8;
  int   OO1  =  0;
   while   (kHR5 >   0)  {
   if (kHR5   &   1)  OO1++;
  kHR5  >>=  1;
 }
  return OO1;
}

int   main(int   argc,  char* argv[])  {
 if (argc  <  3) return   0;
 unsigned   int A  = (unsigned   int)strtoul(argv[1], NULL, 10);
   unsigned  int  hoZF1   =   (unsigned  int)strtoul(argv[2],  NULL, 10);
   printf("%d", f(A,   hoZF1));
   return  0;
}