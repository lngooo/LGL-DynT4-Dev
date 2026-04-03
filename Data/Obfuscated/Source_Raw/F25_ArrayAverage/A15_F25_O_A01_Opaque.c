/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A15_F25_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double LJKW(int   GsoC[],   int   I2)   {
   double   rix   =  0;
  if   ((I2   +   1)  > 0) {
 for   (int s   = 0;   s  < I2;  s++)  rix   += GsoC[s];
  }
 return rix / I2;
}

int  main(int   argc,   char   *argv[])  {
 if   (argc   < 2)   return   0;
 int  I2 =  argc  - 1;
  int  *GsoC   =  (int   *)malloc(I2   * sizeof(int));
  for  (int s =  0;   s <  I2; s++) GsoC[s] =   atoi(argv[s   +   1]);

 double rrqi8  =  LJKW(GsoC,  I2);
  printf("%.2f\n",  rrqi8);

   free(GsoC);
   return  0;
}