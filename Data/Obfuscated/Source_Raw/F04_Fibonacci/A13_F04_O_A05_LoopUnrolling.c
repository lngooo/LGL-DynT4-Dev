/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A13_F04_O_A05_LoopUnrolling.c
 * Implementation Logic: LoopUnrolling
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   Au(int   AGcp) {
   if   (AGcp == 0) return   0;
  if   (AGcp  == 1)   return   1;
  long   Ooi0   =   0, yH8  =   1;
  int j =  2;
   for   (; j <= AGcp -   1; j  +=  2)  {
   Ooi0  =  Ooi0   + yH8; yH8 = Ooi0 +   yH8;
  }
 if  (j  <=  AGcp)   {
 long   uq7  = Ooi0 +   yH8;   Ooi0  =  yH8;  yH8  = uq7;
   }
   return yH8;
}

int main(int   argc,  char   *argv[])   {
   if (argc < 2) {
 return   1;
  }
 int AGcp =   atoi(argv[1]);
   if   (AGcp  <  0) {
 printf("0\n");
 return  0;
 }
 long   Te  =   Au(AGcp);
   printf("%ld\n",   Te);
   return   0;
}
