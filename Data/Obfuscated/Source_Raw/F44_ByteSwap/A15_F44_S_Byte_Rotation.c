/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A15_F44_S_Byte_Rotation.c
 * Implementation Logic: Simulating byte swapping through composite rotation and masking.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t tUhw(uint32_t  QIV) {
 uint32_t   wVN   = ((QIV   <<   8)   & 0xFF00FF00)   |   ((QIV >> 8)   &  0x00FF00FF);
 return  (wVN   << 16)   | (wVN   >> 16);
}

int main(int   argc,   char* argv[])   {
   if   (argc <   2)   return   0;
  uint32_t  s = (uint32_t)strtoul(argv[1], NULL,  10);
   printf("%u\n",  tUhw(s));
  return   0;
}