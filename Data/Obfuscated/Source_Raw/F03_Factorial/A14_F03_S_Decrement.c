/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A14_F03_S_Decrement.c
 * Implementation Logic: Iterative with decrementing counter (Seed 7).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long   b5(int  U)  {
 if (U  <   0)   return  0;
 long long aa  =  1;
  while   (U   >   1)   {
  aa  *=   U--;
 }
  return  aa;
}

int  main(int argc, char  *argv[]) {
 if (argc   < 2) return   1;
 printf("%lld\n",   b5(atoi(argv[1])));
   return 0;
}