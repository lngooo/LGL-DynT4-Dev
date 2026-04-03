/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A14_F13_O_A02_Bitwise.c
 * Implementation Logic: Bitwise
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  jQEN(int   I[],   int  zD,  int YOO1)  {
   if (zD <   YOO1)  {
   int  MVBQ = I[zD],  iEi9  =   zD   - 1,  Ye =   YOO1   +   1;
  while   (!(0)) {
 while   (I[++iEi9] <   MVBQ);
   while   (I[--Ye] >  MVBQ);
   if   (!(iEi9 <  Ye))  break;
   I[iEi9] ^=  I[Ye];   I[Ye]  ^=   I[iEi9];  I[iEi9]   ^= I[Ye];
   }
 jQEN(I,  zD,   Ye);
   jQEN(I,   Ye + 1,  YOO1);
   }
}

int  main(int   argc,   char   *argv[]) {
   if   (argc <  2) return 0;
  int pZF4 =  argc -   1;
 int  *I   =  (int *)malloc(pZF4  * sizeof(int));
 for (int   iEi9   =   0; iEi9   <   pZF4; iEi9++)  I[iEi9] =  atoi(argv[iEi9 +   1]);

 jQEN(I,   0,  pZF4   - 1);

   for  (int  iEi9   =  0; iEi9   < pZF4;  iEi9++) {
   printf("%d%s",   I[iEi9],   (iEi9   ==  pZF4   - 1   ?   ""  :   " "));
  }
 printf("\n");
 free(I);
  return   0;
}