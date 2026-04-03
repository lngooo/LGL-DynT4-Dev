/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A12_F45_O_A04_Logic.c
 * Implementation Logic: Replacing arithmetic subtraction with bitwise NOT and AND derived from A04.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned  int   P4(unsigned  int wWZ)  {
 unsigned int   tw =  wWZ;
 unsigned   int  r0 =   wWZ   >> 1;
  // (a|b)-(a&b) equivalent  to (a|b) &   ~(a&b)
 return   (tw | r0)  &   ~(tw &   r0);
}

int main(int  argc,   char* argv[]) {
  if   (argc   <   2)  return 0;
   unsigned int  wWZ =   (unsigned   int)strtoul(argv[1],   NULL,  10);
   printf("%u", P4(wWZ));
  return   0;
}