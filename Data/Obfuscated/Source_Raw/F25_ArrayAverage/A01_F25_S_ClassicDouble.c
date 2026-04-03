/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A01_F25_S_ClassicDouble.c
 * Implementation Logic: ClassicDouble
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Hb(int x4[], int ormI)  {
   if  (ormI <=   0) return  0.0;
 double n =  0;
 for  (int   J  = 0;  J < ormI;   J++)  n +=  x4[J];
   return n  /  ormI;
}

int main(int  argc, char  *argv[]) {
 if  (argc   <  2)  return   0;
 int ormI  = argc   -  1;
 int  *x4  = (int *)malloc(ormI   *   sizeof(int));
  for   (int   J  =  0; J  < ormI;   J++)  x4[J] =   atoi(argv[J +   1]);

   double   R   =  Hb(x4, ormI);
  printf("%.2f\n",  R);

 free(x4);
   return  0;
}