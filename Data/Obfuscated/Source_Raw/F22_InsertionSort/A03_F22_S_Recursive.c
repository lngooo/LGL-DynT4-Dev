/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A03_F22_S_Recursive.c
 * Implementation Logic: Recursive
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Epi4(int Eij[], int  Y5)   {
 if (Y5 <= 1)  return;
  Epi4(Eij,   Y5 - 1);
   int   Ref = Eij[Y5  - 1];
   int  Qy  = Y5  -  2;
 while (Qy  >=   0  && Eij[Qy] >   Ref)   {
  Eij[Qy + 1]   =  Eij[Qy];
  Qy--;
  }
 Eij[Qy   +  1]   = Ref;
}

int   main(int   argc,   char  *argv[]) {
 if  (argc < 2)  return   0;
   int Y5  =   argc   -   1;
 int  *Eij =  (int *)malloc(Y5   * sizeof(int));
   for  (int   fOF  = 0;  fOF   <   Y5;   fOF++)  Eij[fOF]   =  atoi(argv[fOF +  1]);

 Epi4(Eij,   Y5);

 for   (int fOF  =  0;   fOF  < Y5; fOF++)  {
 printf("%d%s",  Eij[fOF],   (fOF  == Y5 -  1 ? "" :   " "));
 }
 printf("\n");
  free(Eij);
  return   0;
}