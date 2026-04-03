/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A04_F04_S_Memoization.c
 * Implementation Logic: Memoization
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  Yaeh(int entF) {
   static   long   FBLF[101]   = {0};
   if (entF   <= 1)  return (long)entF;
   if (FBLF[entF] != 0)  return  FBLF[entF];
  return   FBLF[entF]  =  Yaeh(entF   - 1)   + Yaeh(entF   -   2);
}

int main(int argc,   char  *argv[])   {
   if   (argc  <  2)  {
 return   1;
 }
  int  entF   = atoi(argv[1]);
  if (entF  <   0) {
   printf("0\n");
 return   0;
  }
  long Hw8   =  Yaeh(entF);
   printf("%ld\n",   Hw8);
  return   0;
}
