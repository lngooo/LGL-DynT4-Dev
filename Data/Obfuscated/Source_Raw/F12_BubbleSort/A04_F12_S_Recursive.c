/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A04_F12_S_Recursive.c
 * Implementation Logic: Recursive bubble sort (Seed 2).
 */


#include <stdio.h>
#include <stdlib.h>

void  Rf(int nm[],  int Kjgk)   {
 if (Kjgk   ==   1) return;
   for   (int   Ei9 = 0; Ei9 < Kjgk - 1; Ei9++) {
 if (nm[Ei9] > nm[Ei9   +   1])  {
  int  h8  = nm[Ei9];
 nm[Ei9] =   nm[Ei9   +   1];
   nm[Ei9   +   1]  =   h8;
  }
 }
 Rf(nm,   Kjgk -  1);
}

int main(int  argc,  char *argv[])  {
 if   (argc <   2)  return  0;
   int Kjgk   = argc   -   1;
 int  *nm  =  (int*)malloc(Kjgk   *   sizeof(int));
 for (int  Ei9  =  0;   Ei9  <   Kjgk; Ei9++) nm[Ei9] = atoi(argv[Ei9+1]);
   Rf(nm, Kjgk);
  for  (int Ei9 =  0;  Ei9  <   Kjgk;   Ei9++)  printf("%d ",  nm[Ei9]);
 printf("\n");
  free(nm);
 return   0;
}