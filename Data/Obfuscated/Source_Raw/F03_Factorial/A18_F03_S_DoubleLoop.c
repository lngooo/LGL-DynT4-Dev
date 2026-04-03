/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A18_F03_S_DoubleLoop.c
 * Implementation Logic: Factorial as repeated addition (Seed 9).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long   long  Kci6(int   n1)  {
   if (n1   <   0) return   0;
 long long  lQjr   =   1;
   for  (int   W  =  1;   W   <= n1;  W++)  {
  long  long  O = 0;
  for   (int   Ya   =   0;  Ya   <   W;  Ya++)   {
   O   +=   lQjr;
 }
 lQjr =   O;
   }
  return   lQjr;
}

int  main(int   argc, char   *argv[])   {
 if   (argc   <   2)   return  1;
   printf("%lld\n", Kci6(atoi(argv[1])));
  return   0;
}