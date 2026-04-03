/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A03_F43_S_Popcount.c
 * Implementation Logic: A number is a power of two if and only if its set bit count is exactly 1.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int H6(unsigned  int  bZs) {
   if  (bZs  ==   0) return   0;
  int  Tl  =  0;
 while   (bZs   > 0) {
 Tl +=   (bZs  &   1);
 bZs   >>=   1;
  }
   return   Tl ==   1;
}

int   main(int   argc,  char* argv[])  {
   if   (argc  <  2) return 0;
  unsigned int   bZs =   (unsigned  int)strtoul(argv[1],  NULL,  10);
   printf("%d", H6(bZs));
   return  0;
}