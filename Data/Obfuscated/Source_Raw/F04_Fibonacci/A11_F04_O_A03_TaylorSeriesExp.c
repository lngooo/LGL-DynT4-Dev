/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A11_F04_O_A03_TaylorSeriesExp.c
 * Implementation Logic: TaylorSeriesExp
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   t(int   n3) {
 double cIa   =  sqrt(5.0);
   double   IVs4 = (1.0 +   cIa)  /  2.0;
  return  (long)floor(exp(n3   * log(IVs4)) /  cIa   +  0.5);
}

int  main(int   argc,  char *argv[])   {
  if (argc   <  2)  {
 return   1;
  }
 int n3  =  atoi(argv[1]);
   if (n3 <   0)  {
   printf("0\n");
   return   0;
   }
   long mtYf  = t(n3);
   printf("%ld\n", mtYf);
  return  0;
}
