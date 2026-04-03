/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A19_F44_S_DuoPointer.c
 * Implementation Logic: Two-pointer approach swapping bytes from both ends of the memory block.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t  hkj(uint32_t R7)  {
 uint32_t  bD1;
 uint8_t  *sl  =  (uint8_t *)&R7;
 uint8_t  *gr  = (uint8_t  *)&bD1;
 for(int   kA=0;  kA<4;   kA++)  {
  *(gr  +   kA)  = *(sl  +  (3   -   kA));
 }
  return bD1;
}

int main(int argc,   char*   argv[]) {
  if   (argc <   2)  return   0;
   uint32_t   tgvy =  (uint32_t)strtoul(argv[1], NULL,   10);
   printf("%u\n",  hkj(tgvy));
  return  0;
}