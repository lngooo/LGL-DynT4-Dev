/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A16_F17_O_A07_Flat.c
 * Logic: Cyclic rotation with flattened state machine.
 */


#include <stdio.h>
#include <stdlib.h>

void oPkx7(int   Yi1[], int   xm6, int vucl)   {
  if  (xm6   <=  1)   return;
   vucl   %=  xm6; if(vucl==0)  return;
  int  YrbN5 =  0,   rvW  = 0, vU =   0,   xq5, CcEq;
 while(YrbN5 <  xm6) {
  switch(vU)   {
  case  0:   xq5   =  rvW;   CcEq   =  Yi1[rvW];   vU =   1; break;
 case   1: {
  int Y8   = (xq5  -   vucl  +   xm6)   % xm6;
  int S =   Yi1[Y8]; Yi1[Y8] =  CcEq;  CcEq  =   S; xq5 =  Y8; YrbN5++;
 if(xq5 ==  rvW)  {   rvW++;  vU   =  0; }  else   vU = 1;
   break;
   }
  }
 }
}

int  main(int  argc, char  *argv[])  {
 if   (argc   < 3) return  0;
 int   vucl  =  atoi(argv[1]);
 int xm6 =  argc   -   2;
   int *Yi1   =   (int*)malloc(xm6 * sizeof(int));
   for(int   QY=0;   QY<xm6;  QY++) Yi1[QY]  =   atoi(argv[QY+2]);
   oPkx7(Yi1,  xm6,  vucl);
   for(int QY=0;  QY<xm6;  QY++)   printf("%d ",  Yi1[QY]);
  printf("\n");
 free(Yi1);
  return   0;
}