/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A19_F43_O_A04_Precision.c
 * Implementation Logic: Adding epsilon-based floating point comparison noise derived from A04.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   bb(unsigned  int EV)  {
 if (EV  == 0) return   0;
   double V = log((double)EV)   /  log(2.0);
 return  fabs(V  - round(V))  <   1e-9;
}

int  main(int  argc,   char* argv[]) {
  if   (argc   < 2) return  0;
   unsigned   int EV   =   (unsigned   int)strtoul(argv[1],   NULL, 10);
  printf("%d",   bb(EV));
   return   0;
}