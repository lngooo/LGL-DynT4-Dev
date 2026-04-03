/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A07_F03_O_A06_ManualTail.c
 * Implementation Logic: Manual conversion of tail-recursion to while loop.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long  iljo(int F)   {
   if (F   <   0) return  0;
   long  long  zTy6   =  1;
  while   (1)   {
  if  (F  <= 0) return  zTy6;
   zTy6 *= F;
  F--;
 }
}

int  main(int   argc,  char   *argv[]) {
 if (argc <   2) return  1;
   printf("%lld\n",   iljo(atoi(argv[1])));
 return 0;
}