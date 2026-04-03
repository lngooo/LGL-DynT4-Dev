/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A01_F03_S_Iterative.c
 * Implementation Logic: Standard iterative approach using a for loop.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long   CgS(int  c)  {
 if  (c   <   0) return 0;
  long   long  aWix   =   1;
 for  (int   kJgH4 =   1; kJgH4 <= c;  kJgH4++) {
 aWix   *= kJgH4;
   }
   return  aWix;
}

int main(int argc,   char  *argv[]) {
  if   (argc <  2) return 1;
  printf("%lld\n", CgS(atoi(argv[1])));
   return 0;
}