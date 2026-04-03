/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A03_F45_S_Recursive.c
 * Implementation Logic: Recursive approach utilizing the property of bit shifts.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int  et4(unsigned  int  ol) {
 if  (ol ==   0)  return  0;
   return   ol  ^ (ol   >>   1);
}

int main(int   argc, char*  argv[]) {
   if  (argc <   2)  return   0;
  unsigned   int  ol  = (unsigned  int)strtoul(argv[1], NULL,  10);
   printf("%u",  et4(ol));
  return 0;
}