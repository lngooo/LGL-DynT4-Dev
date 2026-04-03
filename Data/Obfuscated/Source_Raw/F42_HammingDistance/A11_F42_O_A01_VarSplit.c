/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A11_F42_O_A01_VarSplit.c
 * Implementation Logic: Splitting the distance variable into two components (even/odd parts) derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int   E(unsigned  int Wj, unsigned int H)  {
 unsigned  int gZ  =   Wj   ^   H;
  int nQ =  0,   x   =  0;
  int  D2  =   0;
   while  (gZ   >  0)  {
   if (gZ &   1)  {
 if   (D2 %   2 ==   0)   nQ++; else   x++;
   }
 gZ >>= 1;
   D2++;
 }
   return  nQ   +  x;
}

int   main(int   argc, char* argv[]) {
  if (argc  <  3) return  0;
  unsigned   int  xex5 =  (unsigned   int)strtoul(argv[1],   NULL,  10);
  unsigned   int   u7   = (unsigned int)strtoul(argv[2], NULL,   10);
   printf("%d",   E(xex5,   u7));
  return 0;
}