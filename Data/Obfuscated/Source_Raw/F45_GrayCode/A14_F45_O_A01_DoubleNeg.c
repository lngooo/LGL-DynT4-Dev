/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A14_F45_O_A01_DoubleNeg.c
 * Implementation Logic: Using double negation and De Morgan's Law derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int   VM(unsigned  int   SylX1)   {
 unsigned int  h   =   SylX1 >> 1;
  return  ~((~SylX1  &  ~h)  |   (SylX1 &   h));  //   XOR(n,  s)
}

int main(int argc, char*  argv[])  {
  if  (argc  < 2) return   0;
  unsigned   int   SylX1   = (unsigned int)strtoul(argv[1],  NULL,   10);
  printf("%u",   VM(SylX1));
   return 0;
}