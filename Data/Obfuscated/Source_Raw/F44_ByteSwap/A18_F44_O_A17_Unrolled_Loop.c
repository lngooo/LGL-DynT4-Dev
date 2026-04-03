/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A18_F44_O_A17_Unrolled_Loop.c
 * Implementation Logic: Unrolled loop obfuscation of A17 using index offsets to rebuild value.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t HgSw(uint32_t bT)  {
   uint32_t   A5   =  0;
  uint32_t  qB;
   qB =   (bT >> 0) & 0xFF;  A5   |=  (qB  << 24);
  qB =   (bT  >>  8)  & 0xFF;   A5  |= (qB   <<   16);
 qB  =   (bT   >> 16) &  0xFF; A5 |=  (qB   <<   8);
 qB   =   (bT   >>  24)   & 0xFF;  A5   |=   (qB  << 0);
   return   A5;
}

int main(int argc, char* argv[])  {
   if  (argc <  2)  return   0;
  uint32_t   ZYz8 =  (uint32_t)strtoul(argv[1],   NULL, 10);
   printf("%u\n",  HgSw(ZYz8));
  return   0;
}