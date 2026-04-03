/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A03_F04_S_BinetFormula.c
 * Implementation Logic: BinetFormula
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  lPPt(int  w3) {
 double  o   =   sqrt(5.0);
  double  naMa   =  (1.0   +  o)   /  2.0;
   return  (long)round(pow(naMa, w3)  /   o);
}

int   main(int  argc, char  *argv[])   {
   if  (argc  <  2)   {
  return   1;
  }
   int w3   = atoi(argv[1]);
   if (w3  <   0) {
 printf("0\n");
 return   0;
  }
  long   t5   =   lPPt(w3);
   printf("%ld\n",   t5);
 return 0;
}
