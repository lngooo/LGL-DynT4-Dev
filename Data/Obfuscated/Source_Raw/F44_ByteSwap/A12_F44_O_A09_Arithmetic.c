/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A12_F44_O_A09_Arithmetic.c
 * Implementation Logic: Instruction replacement obfuscation derived from A09, using multiplication/division instead of shifts.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t   F(uint32_t  Z)  {
   uint32_t   MYb8   =  Z  % 256;
   uint32_t ZS   = (Z / 256) %   256;
  uint32_t uq   =  (Z /   65536) % 256;
 uint32_t CD =   (Z /  16777216);
 return   MYb8 * 16777216   +   ZS *   65536  +  uq  *   256  +  CD;
}

int main(int  argc,  char* argv[])  {
  if (argc   < 2)   return 0;
  uint32_t  Tx =  (uint32_t)strtoul(argv[1], NULL, 10);
  printf("%u\n",  F(Tx));
 return   0;
}