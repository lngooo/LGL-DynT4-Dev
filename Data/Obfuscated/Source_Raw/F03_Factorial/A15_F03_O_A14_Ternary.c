/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A15_F03_O_A14_Ternary.c
 * Implementation Logic: Decrement logic compressed with ternary and comma operators.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long  long t(int   E1)  {
  long   long c7 =   1;
   if   (E1 <  0)  return   0;
 for   (;   E1  >   1;   c7   *= E1,  E1--);
 return   c7;
}

int   main(int   argc, char  *argv[]) {
 if  (argc <   2) return  1;
   printf("%lld\n", t(atoi(argv[1])));
  return   0;
}