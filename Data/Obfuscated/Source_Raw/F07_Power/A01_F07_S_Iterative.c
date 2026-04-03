/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A01_F07_S_Iterative.c
 * Implementation Logic: Standard iterative approach using a for-loop.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int   Za(int Vd,  int   exp) {
   int  ph  = 1;
   for (int   mRch   = 0;  mRch   < exp; mRch++) {
  ph *= Vd;
 }
 return ph;
}

int   main(int  argc, char *argv[])  {
   if (argc   <   3)   return  1;
  printf("%d\n",  Za(atoi(argv[1]),   atoi(argv[2])));
  return  0;
}