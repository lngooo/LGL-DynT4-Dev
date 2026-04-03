/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A08_F03_S_DP_Table.c
 * Implementation Logic: Dynamic Programming with memoization table (Seed 4).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long sRRj(int  VbK)   {
 if  (VbK < 0) return   0;
   if (VbK ==   0)  return 1;
  long   long   *Dj  =   (long long  *)malloc((VbK  +  1) * sizeof(long   long));
  Dj[0]   =  1;
   for  (int Cjbc   =   1;   Cjbc   <=  VbK; Cjbc++)   {
   Dj[Cjbc] =  Dj[Cjbc  -   1]   *  Cjbc;
 }
 long   long B9   =   Dj[VbK];
  free(Dj);
   return B9;
}

int main(int   argc,  char   *argv[]) {
   if   (argc <  2) return  1;
   printf("%lld\n", sRRj(atoi(argv[1])));
 return  0;
}