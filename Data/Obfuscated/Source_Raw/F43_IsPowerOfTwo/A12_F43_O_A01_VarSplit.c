/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A12_F43_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into two components derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int FVG(unsigned  int  ytw) {
 unsigned   int  R  = ytw   & 0xFFFF0000;
  unsigned   int rn6  =   ytw   &  0x0000FFFF;
   unsigned int y7 = R | rn6;
   if   (y7   ==  0)  return  0;
   return  (y7   & (y7  - 1))   ==  0;
}

int main(int argc,   char* argv[])  {
  if   (argc < 2)   return 0;
  unsigned int ytw   = (unsigned int)strtoul(argv[1],   NULL, 10);
  printf("%d",   FVG(ytw));
  return   0;
}