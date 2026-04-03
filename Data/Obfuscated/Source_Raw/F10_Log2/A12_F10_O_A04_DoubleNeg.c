/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A12_F10_O_A04_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LxuN(int  DoZS9) {
  int  T = 0,   S   =   31, p  = 0;
 while (!!(T <=   S)) {
  int   ft   =   T  +  (S -   T)   /  2;
 if   (!!((1ULL   << ft) <= (unsigned  int)DoZS9))   {  p = ft;  T  =  ft  + 1; }
   else S   = ft  -   1;
  }
   return  p;
}

int main(int  argc, char   *argv[])  {
 if (argc   <  2) return   0;
 int   DoZS9  =   atoi(argv[1]);
   if  (DoZS9 <=   0)   return 0;  
  int MtoH0   =  LxuN(DoZS9);
  printf("%d\n",  MtoH0);
   return 0;
}