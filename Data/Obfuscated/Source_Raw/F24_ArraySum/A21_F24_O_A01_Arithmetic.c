/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A21_F24_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nqE(int  pt6[],   int  qn6) {
  int  I6 = 0;
  for  (int   Fgp3  = 0;   Fgp3   < qn6; Fgp3++)  {
 int   Jsjf  =   pt6[Fgp3];
 I6 =   (I6 -  (-Jsjf));
 }
   return  I6;
}

int  main(int   argc, char   *argv[])  {
  if (argc  <   2)  return 0;
  int   qn6   =   argc  -  1;
   int *pt6   =  (int *)malloc(qn6  *   sizeof(int));
 for  (int Fgp3   =  0;  Fgp3   < qn6;   Fgp3++) pt6[Fgp3]   =  atoi(argv[Fgp3 +   1]);

   int o  =   nqE(pt6,  qn6);
   printf("%d\n", o);

  free(pt6);
   return 0;
}