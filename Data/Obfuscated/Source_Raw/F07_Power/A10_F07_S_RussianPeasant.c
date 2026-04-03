/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A10_F07_S_RussianPeasant.c
 * Implementation Logic: Power using Russian Peasant algorithm for the exponent steps.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int U(int g,   int exp)   {
 int   zFC4   = 1;
 while  (exp > 0) {
  if (exp & 1)   zFC4   *= g;
  g  *=  g;
 exp >>=  1;
   }
   return   zFC4;
}

int  main(int  argc,   char  *argv[])  {
   if  (argc <  3) return 1;
   printf("%d\n",   U(atoi(argv[1]),  atoi(argv[2])));
  return 0;
}