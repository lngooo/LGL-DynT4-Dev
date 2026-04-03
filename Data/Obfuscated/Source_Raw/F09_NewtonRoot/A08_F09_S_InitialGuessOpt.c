/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A08_F09_S_InitialGuessOpt.c
 * Implementation Logic: Newton with improved initial guess (Seed 4).
 */


#include <stdio.h>
#include <stdlib.h>

int wghn(int  L)  {
  if   (L  <  0)  return   -1;
  if   (L  <   2) return L;
 long   hmz5  = 1;
 //  Better   initial  guess:   find  highest  bit
   while ((hmz5   <<   2)  <=  L)   hmz5  <<=   1;
  long x   =   (hmz5 + L   /  hmz5)  >>  1;
   while (x < hmz5)   {
  hmz5 =   x;
 x  =  (hmz5   +   L   /   hmz5)  >>  1;
   }
 //  Final   check for   integer   rounding
  if   ((hmz5  +  1)  *   (hmz5 +   1)  <= L)  hmz5++;
  return (int)hmz5;
}

int   main(int argc,  char *argv[])  {
 if (argc <  2)   return   1;
 printf("%d\n",   wghn(atoi(argv[1])));
 return  0;
}