/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A09_F44_S_Stack_Buffer.c
 * Implementation Logic: Uses a temporary stack-allocated array to store and reassemble bytes.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t  UJ5(uint32_t   tXe) {
   uint8_t kIrW[4];
  kIrW[0] =  (uint8_t)tXe;
  kIrW[1]   =   (uint8_t)(tXe  >> 8);
   kIrW[2]  =   (uint8_t)(tXe >>  16);
   kIrW[3]   =  (uint8_t)(tXe  >>   24);
  return  ((uint32_t)kIrW[0]   <<   24)   |  ((uint32_t)kIrW[1]   << 16)   |  
 ((uint32_t)kIrW[2]  <<   8) |   (uint32_t)kIrW[3];
}

int main(int   argc, char* argv[]) {
   if (argc  <   2)  return 0;
  uint32_t qVHY   =  (uint32_t)strtoul(argv[1],   NULL,   10);
  printf("%u\n", UJ5(qVHY));
  return   0;
}