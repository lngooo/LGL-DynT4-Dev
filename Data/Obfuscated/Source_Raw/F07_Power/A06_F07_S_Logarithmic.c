/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A06_F07_S_Logarithmic.c
 * Implementation Logic: Using exp() and log() with floor for consistency.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  h1(int  Txv4, int exp)  {
  if  (exp  ==   0)   return 1;
   if  (Txv4  ==   0)   return  0;
 double   Re   = exp *   log((double)Txv4);
   return   (int)(expf(Re)   + 0.5);
}

int  main(int   argc,   char   *argv[])   {
   if  (argc < 3)  return 1;
  printf("%d\n",  h1(atoi(argv[1]), atoi(argv[2])));
   return  0;
}