/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A02_F41_S_Brian_Kernighan.c
 * Implementation Logic: Brian Kernighan's algorithm using n & (n - 1) to clear the least significant set bit.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int B3(uint32_t  SXO)  {
 int cr7   =  0;
   while  (SXO   !=   0) {
 SXO  &=   (SXO  - 1);
   cr7++;
 }
  return cr7;
}

int main(int   argc, char*   argv[]) {
 if (argc < 2)  return   0;
  uint32_t  Zj7 = (uint32_t)strtoul(argv[1],   NULL,  10);
  printf("%d\n",   B3(Zj7));
  return   0;
}