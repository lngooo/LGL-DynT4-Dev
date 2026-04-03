/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A08_F25_O_A02_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   qY(int   T[],  int   auh)  {
  double   HD0  =  0.0;
  int   gXG6 =  0,   iWL6   =  0;
   while (gXG6 != 2)   {
 switch(gXG6) {
 case 0:  gXG6   =   (iWL6   <   auh)   ? 1 :  2; break;
 case   1:  HD0   +=  (T[iWL6] -   HD0)   /  (iWL6 +  1);   iWL6++;  gXG6   = 0;   break;
  }
 }
  return   HD0;
}

int  main(int  argc,  char *argv[])  {
   if (argc <   2)  return   0;
  int   auh =  argc -  1;
   int *T =   (int  *)malloc(auh   *  sizeof(int));
   for  (int iWL6  = 0; iWL6   <  auh;  iWL6++) T[iWL6]   =  atoi(argv[iWL6   + 1]);

   double JWk =   qY(T,  auh);
  printf("%.2f\n",   JWk);

   free(T);
 return   0;
}