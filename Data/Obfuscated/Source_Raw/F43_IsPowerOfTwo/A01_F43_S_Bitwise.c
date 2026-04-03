/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A01_F43_S_Bitwise.c
 * Implementation Logic: Using the classic n & (n-1) bitwise trick. 
 * A power of two has only one bit set.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int  dH1(unsigned  int Fi1) {
  if (Fi1  ==  0)  return 0;
 return   (Fi1 & (Fi1  - 1)) ==  0;
}

int  main(int argc,  char* argv[])  {
 if (argc  <  2)   return  0;
   unsigned   int Fi1  =   (unsigned   int)strtoul(argv[1], NULL,   10);
 printf("%d", dH1(Fi1));
 return 0;
}