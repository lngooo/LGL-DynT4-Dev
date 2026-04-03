/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A19_F45_O_A01_LongLong.c
 * Implementation Logic: Data width promotion to long long to alter Token sequence derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int  ZF6(unsigned   int   L)   {
 unsigned  long long   lpg   = L;
  unsigned   long  long  lHHj   = lpg  >>  1;
  unsigned  long long   ZoYu6  =  lpg  ^  lHHj;
   return   (unsigned   int)ZoYu6;
}

int   main(int   argc, char*   argv[])   {
  if  (argc  <   2)  return   0;
 unsigned  int  L  = (unsigned  int)strtoul(argv[1],   NULL, 10);
 printf("%u",  ZF6(L));
 return   0;
}