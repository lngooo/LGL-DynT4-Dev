/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A19_F41_S_Popcount_Manual.c
 * Implementation Logic: Manual bit manipulation mimicking HAKMEM item 169 for popcount.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int h0(uint32_t Xb8)  {
   uint32_t ruz;
  ruz   =  Xb8  - ((Xb8  >> 1) &  033333333333) -   ((Xb8   >> 2) & 011111111111);
 return ((ruz   +   (ruz  >>   3))  & 030707070707)  %  63;
}

int main(int argc,   char*   argv[]) {
  if   (argc <   2)   return   0;
   uint32_t   zg   = (uint32_t)strtoul(argv[1],  NULL,   10);
  printf("%d\n",  h0(zg));
  return  0;
}