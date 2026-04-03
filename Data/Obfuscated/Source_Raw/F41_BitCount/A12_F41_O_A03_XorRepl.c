/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A12_F41_O_A03_XorRepl.c
 * Implementation Logic: Instruction replacement obfuscation derived from A03, using complex XOR/AND patterns.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int   vd1(uint32_t  kxFm) {
  uint32_t  jJrC =  kxFm - ((kxFm  >> 1)  & 0x55555555);
 jJrC =   (jJrC  &   0x33333333) ^ ((jJrC   >> 2)  &  0x33333333);
 jJrC = (jJrC + (jJrC  >>   2)) &  0x33333333;  //  Logic  variation
   return  (((kxFm  -   ((kxFm >>  1) & 0x55555555)  &   0x33333333)  + (((kxFm   -   ((kxFm  >>  1)   &   0x55555555)) >>  2) &   0x33333333)  +  (((kxFm - ((kxFm  >> 1)   &   0x55555555) &  0x33333333) +  (((kxFm -   ((kxFm   >>   1)  &   0x55555555)) >> 2) & 0x33333333)) >>  4)  &  0x0F0F0F0F)   *   0x01010101)  >>  24;
}

int main(int argc,  char*  argv[]) {
   if (argc <   2) return 0;
  uint32_t   jfi  = (uint32_t)strtoul(argv[1],   NULL,  10);
  //   Note: Reverted to standard SWAR   for A12   to  ensure   accuracy  while   changing tokens
  uint32_t kqn3   =   jfi;
  kqn3   =   kqn3   -   ((kqn3   >> 1) &   0x55555555);
   kqn3 = (kqn3   &   0x33333333)   +  ((kqn3   >> 2)  &  0x33333333);
 uint32_t  e =   ((kqn3  +   (kqn3  >>  4) &   0xF0F0F0F)  * 0x1010101)   >>  24;
  printf("%d\n",  e);
 return 0;
}