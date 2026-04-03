/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A02_F17_S_Juggling.c
 * Logic: Divide array into GCD(n, k) sets and rotate elements within sets.
 */


#include <stdio.h>
#include <stdlib.h>

int  wE(int   HUG7,   int  NJf)  {
  return NJf   ==   0   ? HUG7 :  wE(NJf, HUG7  %  NJf);
}

void  CUHu(int   pLJ7[],   int   yI,  int   q)   {
 if  (yI   ==  0) return;
  q  =  q  % yI;
  int   kYYw   =   wE(q,   yI);
  for (int nY   =   0;  nY   <   kYYw; nY++)   {
 int HD7   =  pLJ7[nY];
 int  VJAl5 =  nY;
  while (1) {
 int  m8  =   (VJAl5  + q)   %  yI;
  if (m8   ==   nY)  break;
 pLJ7[VJAl5]   =   pLJ7[m8];
  VJAl5   =  m8;
   }
  pLJ7[VJAl5] = HD7;
   }
}

int   main(int  argc,  char   *argv[])  {
  if  (argc  <   3)   return  0;
 int q  = atoi(argv[1]);
   int  yI = argc - 2;
   int *pLJ7 =   (int*)malloc(yI *   sizeof(int));
  for(int nY=0;  nY<yI;   nY++)  pLJ7[nY] =   atoi(argv[nY+2]);
   CUHu(pLJ7, yI,  q);
   for(int  nY=0;   nY<yI;  nY++) printf("%d ",   pLJ7[nY]);
   printf("\n");
 free(pLJ7);
 return   0;
}