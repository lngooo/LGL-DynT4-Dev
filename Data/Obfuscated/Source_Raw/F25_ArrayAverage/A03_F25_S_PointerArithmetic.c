/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A03_F25_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  MlP5(int  pALm[],  int Dg4) {
   if (Dg4   <= 0) return 0.0;
 double bS = 0;
   int Wr =   Dg4;
  int  *dkZ = pALm;
 while  (Wr--)   bS   += *dkZ++;
 return bS /   Dg4;
}

int  main(int  argc, char  *argv[]) {
 if  (argc <   2) return  0;
   int   Dg4 = argc  -  1;
  int *pALm  = (int  *)malloc(Dg4   * sizeof(int));
  for  (int XbOX   =  0;  XbOX   <  Dg4;  XbOX++)   pALm[XbOX]   = atoi(argv[XbOX +   1]);

 double   Yn5  =   MlP5(pALm, Dg4);
 printf("%.2f\n", Yn5);

  free(pALm);
   return  0;
}