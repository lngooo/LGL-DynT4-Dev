/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A20_F45_O_A01_Redundant.c
 * Implementation Logic: Insertion of redundant calculations and bitwise identity derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int BWP(unsigned int   S)   {
   unsigned  int  GRR  = S;
 unsigned   int   WNFc   =   S >>  1;
   unsigned  int  X9   =  (GRR &   0) |  (WNFc   & 0);
  unsigned int   iYrW0 =   (GRR   ^   WNFc)   | X9;
   return   iYrW0  &   0xFFFFFFFF;
}

int  main(int  argc,  char* argv[])  {
  if  (argc  <   2)   return 0;
   unsigned int  S  = (unsigned int)strtoul(argv[1],  NULL,   10);
   printf("%u", BWP(S));
 return   0;
}