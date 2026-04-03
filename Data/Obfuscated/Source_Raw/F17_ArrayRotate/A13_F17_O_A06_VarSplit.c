/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A13_F17_O_A06_VarSplit.c
 * Logic: Full copy with loop indices split into base and offset.
 */


#include <stdio.h>
#include <stdlib.h>

void  tr(int   A[],  int   xO,  int   GWoD4)   {
   if  (xO  ==  0)   return;
 GWoD4  %=  xO;
 int *g   =   malloc(xO  *  sizeof(int));
   int  SM = 0,  zy7  =   0;
 while(SM  + zy7 <  xO)  {
  g[SM+zy7]  =   A[(SM   + zy7  +  GWoD4) % xO];
 zy7++;  if(zy7 >=   5)  {  SM  += zy7; zy7  =  0; }
   }
   for(int K=0;  K<xO; K++)  A[K]   = g[K];
 free(g);
}

int  main(int  argc,  char  *argv[])   {
 if  (argc  <  3)   return  0;
  int  GWoD4 = atoi(argv[1]);
  int   xO   = argc -  2;
   int  *A   =  (int*)malloc(xO  *   sizeof(int));
 for(int   K=0;   K<xO;  K++) A[K]  =   atoi(argv[K+2]);
   tr(A, xO, GWoD4);
   for(int  K=0;   K<xO; K++)  printf("%d ", A[K]);
 printf("\n");
  free(A);
 return  0;
}