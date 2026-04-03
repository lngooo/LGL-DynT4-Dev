/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A05_F03_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (n*n >= 0) to confuse analysis.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long HKa(int   SLfB7)  {
 if (SLfB7 <=   0)  {
   if  ((SLfB7  *   SLfB7 +   7) >   0) return   1;
  else return   0;
   }
 return  (long   long)SLfB7 * HKa(SLfB7  -  1);
}

int  main(int  argc,   char   *argv[])  {
  if  (argc  < 2) return 1;
 int   SLfB7 = atoi(argv[1]);
 printf("%lld\n", SLfB7  <  0  ?  0 :   HKa(SLfB7));
  return 0;
}