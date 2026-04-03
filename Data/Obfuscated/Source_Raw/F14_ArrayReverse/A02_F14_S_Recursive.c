/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A02_F14_S_Recursive.c
 * Implementation Logic: Recursive reversal by swapping boundaries.
 */


#include <stdio.h>
#include <stdlib.h>

void R(int Asdz9[],   int   tZN,   int   vC)   {
  if   (tZN >=   vC) return;
 int   vBSX  = Asdz9[tZN];  Asdz9[tZN]  =   Asdz9[vC];   Asdz9[vC] = vBSX;
 R(Asdz9,  tZN   + 1, vC  - 1);
}

void   emuf9(int   Asdz9[], int  G)   {
   if (G >  1)   R(Asdz9,   0,   G  -   1);
}

int  main(int   argc,  char *argv[]) {
   if  (argc <  2)  return  0;
  int   G   =  argc   -   1;
 int *Asdz9  =  (int*)malloc(G   *  sizeof(int));
 for(int  C=0;  C<G; C++)   Asdz9[C] = atoi(argv[C+1]);
   emuf9(Asdz9, G);
 for(int  C=0;  C<G;  C++)   printf("%d ", Asdz9[C]);
   printf("\n");
  free(Asdz9);
  return   0;
}