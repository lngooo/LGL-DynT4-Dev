/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A05_F45_S_Byte.c
 * Implementation Logic: Decomposing the integer into bytes and performing shift-xor across memory.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int sh(unsigned int   v)   {
   unsigned   char nM[4];
  unsigned   int F =  v >>  1;
  unsigned char   Ak[4];
  for(int N=0;  N<4;  N++) {
  nM[N]   =   (v   >> (N*8)) & 0xFF;
  Ak[N]  = (F >>  (N*8))  &  0xFF;
  }
 unsigned   int   Pe8 =  0;
  for(int   N=0;  N<4; N++)   {
 Pe8 |=  (unsigned int)(nM[N] ^   Ak[N]) <<   (N*8);
  }
  return Pe8;
}

int   main(int   argc,   char*   argv[])   {
 if   (argc   <   2)   return  0;
 unsigned  int   v  =   (unsigned  int)strtoul(argv[1],   NULL, 10);
   printf("%u",   sh(v));
  return   0;
}