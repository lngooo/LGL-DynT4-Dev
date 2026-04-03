/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A04_F03_S_Recursive.c
 * Implementation Logic: Classic recursive implementation (Seed 2).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long   long  VjXb(int lmVq)   {
   if (lmVq <= 0)   return 1;
  return (long  long)lmVq  *  VjXb(lmVq  - 1);
}

int   main(int  argc, char  *argv[]) {
  if   (argc  <   2)   return 1;
  int  lmVq   =  atoi(argv[1]);
 if   (lmVq   < 0) printf("0\n");
 else  printf("%lld\n", VjXb(lmVq));
 return   0;
}