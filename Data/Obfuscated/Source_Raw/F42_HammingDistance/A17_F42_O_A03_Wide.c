/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A17_F42_O_A03_Wide.c
 * Implementation Logic: Promoting variables to long long to change token width and instruction set derived from A03.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int N6(unsigned int v,   unsigned   int   O)  {
  unsigned   long  long  h = (unsigned long  long)v ^   O;
 int NcBa2   = 0;
   while   (h  !=   0ULL)  {
 h  &= (h  - 1ULL);
  NcBa2++;
   }
 return NcBa2;
}

int   main(int   argc, char*   argv[])  {
   if  (argc   <  3)  return  0;
  unsigned int w =   (unsigned int)strtoul(argv[1],   NULL,   10);
 unsigned int   gD   = (unsigned int)strtoul(argv[2],  NULL,   10);
  printf("%d", N6(w,  gD));
  return 0;
}