/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A18_F41_O_A17_BitPermutation.c
 * Implementation Logic: Instruction substitution on A17 using subtractions and bitwise inverses to obscure summing.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int   s(uint32_t x) {
  uint32_t   Ja =   0x55555555;
  x   =  x -   ((x  >>  1) &   Ja);
   x  =   (x   &  0x33333333)   +  ((x >>  2) & 0x33333333);
 x   =  (x + (x >>  4))   &  0x0F0F0F0F;
   x =  x  +   (x   >> 8);
  x  =   x   + (x >>   16);
  return x &   0x3F;
}

int   main(int argc, char* argv[]) {
   if (argc <  2) return 0;
  uint32_t   uh2   =  (uint32_t)strtoul(argv[1],   NULL, 10);
  printf("%d\n",   s(uh2));
   return  0;
}