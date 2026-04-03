/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A21_F17_O_A01_Recursion.c
 * Logic: Reversal seed with recursive reverse function.
 */


#include <stdio.h>
#include <stdlib.h>

void  IeM(int   glk[],   int h,   int r)  {
 if(h  >=  r) return;
 int CwF =   glk[h]; glk[h] =  glk[r];  glk[r] = CwF;
 IeM(glk,   h+1,   r-1);
}

void   CDKj(int  iQ[],   int  H9,  int   Apo)   {
   if   (H9  ==  0)  return;
   Apo  %=   H9;
 IeM(iQ,   0,   Apo-1);
 IeM(iQ,  Apo, H9-1);
   IeM(iQ, 0, H9-1);
}

int   main(int  argc,  char   *argv[])  {
   if (argc  <  3)  return   0;
   int   Apo =  atoi(argv[1]);
 int H9   = argc   -   2;
 int *iQ = (int*)malloc(H9 *   sizeof(int));
  for(int QX=0; QX<H9; QX++)  iQ[QX]  =   atoi(argv[QX+2]);
 CDKj(iQ, H9,  Apo);
 for(int   QX=0;  QX<H9;   QX++) printf("%d ",   iQ[QX]);
 printf("\n");
 free(iQ);
   return   0;
}