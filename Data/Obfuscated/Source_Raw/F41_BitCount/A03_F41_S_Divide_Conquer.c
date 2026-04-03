/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A03_F41_S_Divide_Conquer.c
 * Implementation Logic: Parallel bit counting using bitwise masks to count bits in pairs, nibbles, etc.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int   Nv(uint32_t  K0)   {
   K0   = K0 -  ((K0   >>  1) & 0x55555555);
  K0 =  (K0  & 0x33333333)   +   ((K0  >> 2) & 0x33333333);
  return  (((K0 +  (K0   >>   4))   &   0x0F0F0F0F) *  0x01010101) >> 24;
}

int main(int   argc,  char*  argv[])   {
  if   (argc   <  2)   return   0;
 uint32_t   l  =   (uint32_t)strtoul(argv[1],  NULL, 10);
  printf("%d\n", Nv(l));
  return 0;
}