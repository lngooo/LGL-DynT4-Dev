/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A18_F42_O_A05_FakeLoop.c
 * Implementation Logic: Wrapping recursive logic in a fake single-iteration loop derived from A05.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  u(unsigned   int   CD,   unsigned   int ZdCh1) {
   for(int  U6   =   0;   U6 <  1;  U6++)  {
  if   (CD   ==  0   &&  ZdCh1   ==  0)   return  0;
   return ((CD   & 1)  !=  (ZdCh1  &  1)) + u(CD   >>  1,   ZdCh1 >> 1);
  }
 return  -1;
}

int main(int   argc, char*   argv[])   {
   if (argc <   3)   return  0;
   unsigned   int   yrBG7  = (unsigned int)strtoul(argv[1], NULL, 10);
  unsigned  int   lx  =  (unsigned   int)strtoul(argv[2],   NULL,  10);
   printf("%d", u(yrBG7, lx));
  return  0;
}