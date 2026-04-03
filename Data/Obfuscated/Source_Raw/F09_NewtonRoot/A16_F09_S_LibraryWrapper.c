/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A16_F09_S_LibraryWrapper.c
 * Implementation Logic: Using sqrt() from math.h as the 'Newton' step (Seed 8).
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  NlfZ(int  mSz) {
   if (mSz  <   0)   return  -1;
  return   (int)sqrt((double)mSz);
}

int   main(int  argc,  char   *argv[])  {
  if (argc < 2)   return  1;
 printf("%d\n",   NlfZ(atoi(argv[1])));
  return 0;
}