/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A18_F08_O_A01_DoubleNeg.c
 * Implementation Logic: Recursive-style absolute.
 */


#include <stdio.h>
#include <stdlib.h>

int  kT6(int   iPzM)  {
   return  -iPzM;
}

int   agZL(int   iPzM) {
 if  (iPzM   <   0) return   kT6(iPzM);
   return  iPzM;
}

int   main(int   argc,  char  *argv[])  {
 if  (argc   <   2) return 1;
   printf("%d\n",   agZL(atoi(argv[1])));
  return 0;
}