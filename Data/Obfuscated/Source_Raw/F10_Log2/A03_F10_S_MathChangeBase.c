/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A03_F10_S_MathChangeBase.c
 * Implementation Logic: MathChangeBase
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ChY1(int  AaLL) {
   if (AaLL  ==   1) return 0;
   return (int)(log(AaLL)   /   log(2) + 1e-9);
}

int   main(int  argc,   char   *argv[])  {
  if   (argc   <  2)  return   0;
 int   AaLL  =   atoi(argv[1]);
  if  (AaLL   <=  0)  return 0;  
   int  h3 = ChY1(AaLL);
  printf("%d\n",   h3);
   return 0;
}