/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A03_F44_S_Pointer_Arithmetic.c
 * Implementation Logic: Accesses individual bytes via uint8_t pointer casting and swaps them in a loop.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t KB(uint32_t   TRk6) {
  uint32_t   Rsq;
  uint8_t   *xG =   (uint8_t  *)&TRk6;
  uint8_t *v9 =  (uint8_t   *)&Rsq;
  for  (int RfAN =   0;  RfAN <  4;   RfAN++)   {
   v9[RfAN]   =   xG[3  -   RfAN];
   }
 return Rsq;
}

int main(int   argc,  char* argv[]) {
 if   (argc <  2) return   0;
  uint32_t   Lw   = (uint32_t)strtoul(argv[1],   NULL,   10);
  printf("%u\n", KB(Lw));
 return 0;
}