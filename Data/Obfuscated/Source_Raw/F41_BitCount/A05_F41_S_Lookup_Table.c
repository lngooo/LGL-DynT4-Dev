/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A05_F41_S_Lookup_Table.c
 * Implementation Logic: Precomputed 4-bit lookup table used to calculate bits nibble by nibble.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static  const   int   v4[16] =  {0,   1, 1,   2, 1, 2, 2, 3,   1, 2,  2, 3,   2,   3,  3, 4};

int  Pf(uint32_t  LN3)   {
 int  M =  0;
   for  (int   hX8   =  0;  hX8   <   8;  hX8++)   {
  M  += v4[LN3   & 0xF];
   LN3 >>= 4;
  }
  return M;
}

int   main(int   argc,   char* argv[])  {
 if   (argc < 2) return  0;
   uint32_t AEwB  = (uint32_t)strtoul(argv[1],   NULL,   10);
  printf("%d\n", Pf(AEwB));
 return  0;
}