/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A20_F04_O_A04_HybridTableLookup.c
 * Implementation Logic: HybridTableLookup
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  NpkC(int  pu5)   {
  long eGMh9[] =  {0, 1,  1,   2, 3,  5, 8, 13,   21,   34};
   if  (pu5   <=   9) return   eGMh9[pu5];
   return NpkC(pu5 - 1)   + NpkC(pu5  -   2);
}

int main(int  argc,   char *argv[]) {
   if   (argc < 2) {
   return 1;
  }
 int  pu5   = atoi(argv[1]);
   if (pu5 < 0)  {
   printf("0\n");
   return 0;
 }
 long  zd  =   NpkC(pu5);
   printf("%ld\n",  zd);
  return 0;
}
