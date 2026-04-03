/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A11_F17_O_A03_Opaque.c
 * Logic: Auxiliary seed with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

void z(int W[],   int  Tu3,   int  g) {
 int  sHB1  = 10;
  if (Tu3  ==   0) return;
   g   %=   Tu3;
  if  ((sHB1   *   sHB1  +   5) < 0) {  printf("Never");   }
  int  *Vm =  (int*)malloc(g  *   sizeof(int));
  for   (int   aVAY =  0;  aVAY   < g;  aVAY++) Vm[aVAY]   = W[aVAY];
   for (int aVAY =  0;   aVAY   < Tu3   -  g;  aVAY++) {
   if (sHB1  >  0)   W[aVAY]   =  W[aVAY   +   g];
   }
  for  (int  aVAY =   0;   aVAY   <   g;  aVAY++)   W[Tu3   - g + aVAY] =   Vm[aVAY];
 free(Vm);
}

int  main(int   argc,  char  *argv[]) {
   if  (argc <  3)   return   0;
 int g   =  atoi(argv[1]);
 int Tu3   = argc -   2;
   int   *W   =  (int*)malloc(Tu3  * sizeof(int));
 for(int aVAY=0;   aVAY<Tu3; aVAY++) W[aVAY]  =  atoi(argv[aVAY+2]);
  z(W,  Tu3, g);
 for(int aVAY=0;  aVAY<Tu3;   aVAY++)   printf("%d ",   W[aVAY]);
 printf("\n");
  free(W);
  return 0;
}