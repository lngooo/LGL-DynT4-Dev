/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A10_F04_O_A02_TernaryRecursive.c
 * Implementation Logic: TernaryRecursive
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long f(int  mn)   {
  return   (mn <  2) ? (long)mn :   (f(mn-1)  + f(mn-2));
}

int   main(int argc, char   *argv[]) {
 if   (argc <  2) {
  return   1;
 }
  int  mn  = atoi(argv[1]);
  if (mn   <   0) {
 printf("0\n");
   return   0;
  }
   long  sqE4   =   f(mn);
 printf("%ld\n",   sqE4);
   return   0;
}
