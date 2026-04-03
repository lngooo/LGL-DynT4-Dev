/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A13_F03_O_A12_Logspace.c
 * Implementation Logic: Factorial calculation in log space to prevent overflow.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   long   py(int   XU)   {
 if  (XU <   0) return   0;
  if   (XU  ==  0) return 1;
 double sM  =  0;
   for  (int tEy0  =   1; tEy0 <=  XU;  tEy0++)   sM +=  log((double)tEy0);
   return (long long)floor(exp(sM)  +  0.5);
}

int main(int argc,   char *argv[])  {
 if (argc   <  2)   return  1;
  printf("%lld\n",  py(atoi(argv[1])));
  return  0;
}