/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A05_F42_S_Recursive.c
 * Implementation Logic: Recursive implementation checking the last bit and calling itself with shifted values.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int Xh(unsigned  int   foWY0,  unsigned  int   X)   {
   if   (foWY0 ==   0   && X  ==  0) return  0;
 return   ((foWY0   & 1) !=  (X & 1)) +   Xh(foWY0  >>  1, X >>   1);
}

int  main(int argc,   char*  argv[])   {
   if  (argc  <  3)  return 0;
  unsigned int   r =   (unsigned int)strtoul(argv[1], NULL, 10);
 unsigned  int  R0 = (unsigned int)strtoul(argv[2],   NULL,  10);
  printf("%d", Xh(r,   R0));
   return  0;
}