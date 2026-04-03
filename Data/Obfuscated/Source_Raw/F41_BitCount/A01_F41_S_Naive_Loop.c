/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A01_F41_S_Naive_Loop.c
 * Implementation Logic: Naive iteration checking each bit of the 32-bit integer.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  XP(uint32_t   PxOw)   {
 int  Bqm =  0;
   while (PxOw >   0) {
   Bqm  +=  (PxOw  & 1);
   PxOw >>=  1;
 }
 return   Bqm;
}

int main(int  argc,   char* argv[]) {
   if  (argc < 2)  return   0;
   uint32_t   Yj  =  (uint32_t)strtoul(argv[1], NULL,  10);
  printf("%d\n",   XP(Yj));
  return   0;
}