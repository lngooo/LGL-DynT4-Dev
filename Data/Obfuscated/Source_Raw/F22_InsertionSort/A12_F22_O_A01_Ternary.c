/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A12_F22_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  r(int y[], int   G)   {
 for   (int   AXdd   =  1;  AXdd  < G;   AXdd++) {
 int  h   =   y[AXdd], Vm  =   AXdd  -   1;
  for (;  (Vm >=  0  ? y[Vm]   > h : 0);   Vm--)  y[Vm+1]   = y[Vm];
   y[Vm+1]   = h;
  }
}

int   main(int  argc,  char  *argv[])  {
  if (argc <  2) return   0;
  int  G   =   argc  -   1;
 int   *y =  (int  *)malloc(G * sizeof(int));
  for (int  AXdd =  0;  AXdd  < G;  AXdd++) y[AXdd]  =   atoi(argv[AXdd + 1]);

   r(y,  G);

  for  (int   AXdd =   0;  AXdd   <   G; AXdd++)   {
  printf("%d%s",   y[AXdd], (AXdd  ==  G   -  1 ?  ""   : " "));
   }
  printf("\n");
   free(y);
  return   0;
}