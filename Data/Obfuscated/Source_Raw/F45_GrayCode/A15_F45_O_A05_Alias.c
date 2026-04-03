/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A15_F45_O_A05_Alias.c
 * Implementation Logic: Array-based aliasing and redundant data flow derived from A05.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int   B(unsigned   int  qjxX)   {
   unsigned   int Zz[3];
   Zz[0]  = qjxX;
   Zz[1] =   qjxX >>  1;
 Zz[2]   =   Zz[0] ^ Zz[1];
  unsigned  int *J =  &Zz[2];
   return  *J;
}

int   main(int argc,  char* argv[])  {
   if (argc < 2)  return 0;
   unsigned  int  qjxX   =  (unsigned int)strtoul(argv[1],  NULL,  10);
 printf("%u",  B(qjxX));
  return  0;
}