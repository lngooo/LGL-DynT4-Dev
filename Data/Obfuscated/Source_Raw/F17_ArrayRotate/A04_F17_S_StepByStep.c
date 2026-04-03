/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A04_F17_S_StepByStep.c
 * Logic: Rotate the array by one position k times.
 */


#include <stdio.h>
#include <stdlib.h>

void  jfQ(int   bmxa[],  int  rq)   {
  int   wVEd   =   bmxa[0],   wxM;
 for   (wxM   =   0; wxM <  rq -  1;   wxM++)   bmxa[wxM] = bmxa[wxM +  1];
 bmxa[rq   -  1]   =   wVEd;
}

void   w1(int  bmxa[], int rq, int   cNL)  {
  if   (rq == 0) return;
   cNL  =  cNL %   rq;
 for (int wxM = 0;  wxM  <  cNL; wxM++)   jfQ(bmxa, rq);
}

int  main(int   argc, char  *argv[])   {
   if (argc   <  3)   return   0;
   int cNL =  atoi(argv[1]);
   int   rq  = argc  -  2;
 int   *bmxa =   (int*)malloc(rq   *   sizeof(int));
 for(int   wxM=0;  wxM<rq;   wxM++)  bmxa[wxM] =   atoi(argv[wxM+2]);
  w1(bmxa,   rq,  cNL);
 for(int  wxM=0; wxM<rq;   wxM++) printf("%d ",   bmxa[wxM]);
  printf("\n");
   free(bmxa);
 return   0;
}