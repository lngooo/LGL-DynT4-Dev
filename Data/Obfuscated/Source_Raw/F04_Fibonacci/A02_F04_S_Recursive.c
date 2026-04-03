/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A02_F04_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long FDaL(int   XlF)   {
   if  (XlF <=   1)   return  (long)XlF;
  return   FDaL(XlF   - 1) +  FDaL(XlF  - 2);
}

int main(int argc, char   *argv[])   {
   if  (argc <   2) {
 return  1;
   }
   int XlF   =   atoi(argv[1]);
 if (XlF  <   0) {
   printf("0\n");
   return 0;
   }
   long  iRFP   =  FDaL(XlF);
  printf("%ld\n", iRFP);
   return   0;
}
