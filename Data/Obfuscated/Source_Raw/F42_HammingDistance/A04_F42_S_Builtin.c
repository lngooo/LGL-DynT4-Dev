/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A04_F42_S_Builtin.c
 * Implementation Logic: Leverages compiler intrinsic __builtin_popcount on the XOR result.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  c(unsigned   int  kNX, unsigned   int   Mw)  {
  return  __builtin_popcount(kNX   ^   Mw);
}

int  main(int  argc,   char*  argv[]) {
   if   (argc   < 3)   return 0;
 unsigned  int sBFg =  (unsigned   int)strtoul(argv[1], NULL,  10);
 unsigned  int Pqpe   = (unsigned int)strtoul(argv[2],  NULL, 10);
  printf("%d", c(sBFg,  Pqpe));
   return   0;
}