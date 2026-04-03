/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A06_F10_S_SubtractionLoop.c
 * Implementation Logic: SubtractionLoop
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   LCz7(int  P)   {
 int b1   =   -1;
  unsigned   int  dt3   = 1;
   while (dt3 <=   (unsigned int)P &&   dt3 > 0) {
   dt3 <<= 1;
  b1++;
   if (dt3 > (unsigned   int)P) break;
  }
  return   b1;
}

int   main(int argc,  char *argv[])   {
  if   (argc   < 2)  return  0;
   int   P   = atoi(argv[1]);
  if (P   <= 0) return 0; 
  int S0   =   LCz7(P);
 printf("%d\n",   S0);
 return   0;
}