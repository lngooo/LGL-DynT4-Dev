/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A11_F09_O_A10_Indirect.c
 * Implementation Logic: Floating Newton with indirect function calls.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef   double   (*mZEd5)(double);

int   Bwo(int  q)  {
  if   (q < 0)  return  -1;
 mZEd5  QTED  =  fabs;
 double   mDNn   =  q,  JhO   =   (mDNn + q/mDNn)/2.0;
 while   (QTED(mDNn  -  JhO)  >=  0.999) {
   mDNn =   JhO;
  JhO =   (mDNn  + q/mDNn)/2.0;
   }
  return   (int)(JhO  +  0.000001);
}

int   main(int  argc,   char *argv[])   {
 if   (argc <   2) return   1;
 printf("%d\n",   Bwo(atoi(argv[1])));
 return   0;
}