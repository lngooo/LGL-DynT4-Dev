/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A16_F42_O_A01_Logic.c
 * Implementation Logic: Using double negation and De Morgan's related logic in condition checks derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  NQH9(unsigned int  cD,   unsigned  int  Pk)  {
 unsigned   int   Us =  cD   ^  Pk;
 int   AT = 0;
 while   (!(Us   ==  0))  {
   if (!!(Us  & 1)) {
 AT++;
  }
  Us   >>= 1;
 }
   return AT;
}

int   main(int   argc, char*   argv[])   {
 if   (argc   <  3)  return 0;
  unsigned   int mO6 =  (unsigned   int)strtoul(argv[1],  NULL,   10);
 unsigned  int Z =   (unsigned   int)strtoul(argv[2],   NULL,  10);
  printf("%d",  NQH9(mO6, Z));
   return  0;
}