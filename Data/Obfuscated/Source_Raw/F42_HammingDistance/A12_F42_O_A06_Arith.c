/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A12_F42_O_A06_Arith.c
 * Implementation Logic: Instruction replacement and redundant mathematical operations derived from A06.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int   Bjc0(unsigned int zgv, unsigned int  s5)  {
 unsigned  int   hSkb =   (zgv |   s5)  -  (zgv &  s5);  // Arithmetic   equivalent   to XOR
   hSkb   = hSkb  -   ((hSkb  >>   1)   &   0x55555555);
 hSkb =   (hSkb  &  0x33333333)  +   ((hSkb   >>   2)   &  0x33333333);
   unsigned   int qIB5   =  (((hSkb +  (hSkb >> 4))   &   0x0F0F0F0F)  *  0x01010101)  >> 24;
  return (int)(qIB5   +   (zgv   ^  zgv));   //  Adding zero
}

int   main(int   argc,  char*   argv[])  {
 if   (argc  <  3) return  0;
  unsigned int eJ   =   (unsigned  int)strtoul(argv[1], NULL, 10);
  unsigned  int FNI =   (unsigned int)strtoul(argv[2], NULL,   10);
  printf("%d",  Bjc0(eJ,   FNI));
   return  0;
}