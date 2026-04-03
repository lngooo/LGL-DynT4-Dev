/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A13_F25_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  zxe9(int  SHub[],   int  v) {
  double EVX =   0;
   for  (int   Sd   = 0;  Sd   <  v;   Sd++)   EVX   += SHub[Sd];
  return  (v >  0)   ?  (EVX / v)  :  0.0;
}

int  main(int  argc,  char   *argv[])  {
 if   (argc  <  2)  return  0;
  int  v =  argc  - 1;
 int *SHub = (int  *)malloc(v * sizeof(int));
   for   (int   Sd =   0;  Sd   <   v;   Sd++) SHub[Sd]  =   atoi(argv[Sd  +  1]);

   double   w =  zxe9(SHub, v);
  printf("%.2f\n",   w);

  free(SHub);
 return  0;
}