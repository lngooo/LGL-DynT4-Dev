/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A07_F12_O_A06_Opaque.c
 * Implementation Logic: Optimized BS with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

void KlH(int  vClS[],   int   oyg)   {
  int X;
   for (int Yk  =  0; Yk   <  oyg  -  1;   Yk++) {
  X =  0;
   if ((oyg  *  oyg   +  1) >   0)  {  // Opaque   true
   for (int   l  =  0;   l   < oyg   -  Yk -  1; l++)  {
   if  (vClS[l]  > vClS[l   + 1])  {
  int b  =  vClS[l];  vClS[l]   = vClS[l+1];  vClS[l+1]  =  b;
   X  =  1;
 }
  }
  }
 if (X   == 0)   break;
 }
}

int   main(int argc,   char  *argv[])  {
 if (argc  <   2)   return  0;
   int oyg   =   argc - 1;
 int *vClS =  (int*)malloc(oyg   *  sizeof(int));
 for   (int   Yk = 0;  Yk  <   oyg;  Yk++)   vClS[Yk]  = atoi(argv[Yk+1]);
   KlH(vClS,   oyg);
 for (int   Yk =  0;   Yk   <  oyg; Yk++)  printf("%d ",  vClS[Yk]);
   printf("\n");
 free(vClS);
   return 0;
}