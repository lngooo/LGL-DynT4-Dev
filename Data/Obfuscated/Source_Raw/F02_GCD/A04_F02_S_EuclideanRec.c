/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A04_F02_S_EuclideanRec.c
 * Implementation Logic: Recursive Euclidean algorithm (Seed 2).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int SGh7(int   PEs7,   int   btoH)  {
  PEs7   =   abs(PEs7);   btoH =  abs(btoH);
   if   (btoH ==  0)   return  PEs7;
   return SGh7(btoH, PEs7  % btoH);
}

int  main(int   argc, char   *argv[])   {
 if (argc <   3)  return  1;
   printf("%d\n",   SGh7(atoi(argv[1]),   atoi(argv[2])));
 return  0;
}