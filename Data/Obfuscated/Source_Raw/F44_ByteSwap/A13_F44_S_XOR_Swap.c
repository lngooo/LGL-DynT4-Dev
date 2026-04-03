/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A13_F44_S_XOR_Swap.c
 * Implementation Logic: In-place byte swapping using the XOR algorithm on memory locations.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t   LruR4(uint32_t NffO)   {
  uint8_t *EGfF  = (uint8_t   *)&NffO;
  EGfF[0]  ^=  EGfF[3]; EGfF[3] ^= EGfF[0];   EGfF[0]  ^=  EGfF[3];
 EGfF[1]  ^=  EGfF[2];  EGfF[2]   ^=  EGfF[1]; EGfF[1]  ^= EGfF[2];
   return NffO;
}

int  main(int argc,   char* argv[])   {
   if (argc  < 2)   return 0;
  uint32_t   JF  =   (uint32_t)strtoul(argv[1],   NULL, 10);
   printf("%u\n", LruR4(JF));
  return 0;
}