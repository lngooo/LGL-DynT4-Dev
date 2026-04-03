/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A08_F05_S_MathLib.c
 * Implementation Logic: Using math.h sqrt() and flooring to integer (Seed 4).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  CQC0(int   TgxS) {
  if  (TgxS <  0)   return  -1;
  double b   =   sqrt((double)TgxS);
  return   (int)floor(b);
}

int   main(int   argc,   char   *argv[])  {
  if   (argc <   2) return  1;
  printf("%d\n",  CQC0(atoi(argv[1])));
   return  0;
}