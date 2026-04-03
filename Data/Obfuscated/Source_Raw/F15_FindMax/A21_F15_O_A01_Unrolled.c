/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A21_F15_O_A01_Unrolled.c
 * Implementation Logic: Partially unrolled scan loop.
 */


#include <stdio.h>
#include <stdlib.h>

int  uHn(int  x[], int R)   {
   int   I  =  x[0], F7  =   1;
 for  (; F7   < R  -  1;   F7   += 2)   {
   if (x[F7]   >   I)  I   =   x[F7];
  if  (x[F7+1]  >  I)  I  =  x[F7+1];
  }
   for (;  F7 <  R;  F7++)  {
   if   (x[F7]  >   I)   I =   x[F7];
  }
 return  I;
}

int   main(int  argc,   char  *argv[]) {
  if  (argc   < 2) return   0;
 int   R  =   argc -  1;
  int   *x =  (int*)malloc(R *  sizeof(int));
 for  (int   F7  =  0; F7 <   R; F7++) x[F7] =  atoi(argv[F7+1]);
   printf("%d\n",  uHn(x,  R));
  free(x);
 return  0;
}