/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A13_F43_O_A06_InstrReplace.c
 * Implementation Logic: Instruction replacement using bitwise shifts instead of division derived from A06.
 */


#include <stdio.h>
#include <stdlib.h>

int  hl(unsigned   int   D3)   {
  unsigned int  Vev   =   1U   <<   31;
   if (D3  ==   0)   return 0;
   //   Check   if   max_v   is divisible by n using identity:   a   % b   ==   0
 return   (D3  > 0   &&  (Vev /   D3)  *  D3  ==  Vev);
}

int   main(int  argc,  char*   argv[])  {
  if  (argc < 2)   return  0;
   unsigned int D3  =   (unsigned  int)strtoul(argv[1], NULL,   10);
  printf("%d",  hl(D3));
  return  0;
}