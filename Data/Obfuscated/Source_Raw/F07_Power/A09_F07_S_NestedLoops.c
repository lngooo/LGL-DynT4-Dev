/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A09_F07_S_NestedLoops.c
 * Implementation Logic: Exponentiation by simulating multiplication via addition loops.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int P(int   Wu,  int exp)   {
   if (exp  ==   0)   return  1;
 int VAwf   = Wu;
  for (int   G =   1;  G  <   exp; G++)  {
 int Riq0   = 0;
   for   (int aOhG =  0;   aOhG < Wu; aOhG++)  {
  Riq0 += VAwf;
 }
  VAwf  = Riq0;
  }
 return  VAwf;
}

int main(int  argc, char  *argv[])   {
 if (argc   <  3)  return  1;
   printf("%d\n",  P(atoi(argv[1]), atoi(argv[2])));
 return  0;
}