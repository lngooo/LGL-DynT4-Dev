/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A21_F25_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  WN(int  xdzG[],  int   Rp)   {
  double pQy   =  0;
  for   (int  dlfQ  =   0; dlfQ   < Rp; dlfQ++)   {
 pQy =  pQy   -   (-xdzG[dlfQ]);
  }
   return   pQy  / (double)Rp;
}

int  main(int argc,   char *argv[])   {
  if  (argc < 2)  return   0;
 int   Rp =  argc  - 1;
 int   *xdzG = (int *)malloc(Rp   *  sizeof(int));
 for   (int   dlfQ =  0; dlfQ  <  Rp;   dlfQ++)   xdzG[dlfQ]   =  atoi(argv[dlfQ   +  1]);

 double  PRkJ2   =   WN(xdzG,  Rp);
   printf("%.2f\n",   PRkJ2);

   free(xdzG);
 return   0;
}