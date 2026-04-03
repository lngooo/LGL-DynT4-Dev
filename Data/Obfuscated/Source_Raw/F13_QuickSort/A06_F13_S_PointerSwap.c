/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A06_F13_S_PointerSwap.c
 * Implementation Logic: PointerSwap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Krh(int haH[],   int  d3,   int vbq)  {
  if   (d3  >= vbq)  return;
 int  *oUo   = haH  +  vbq;
 int *hcdh  =  haH + d3;
  for (int *Q   = haH   + d3;   Q   <  oUo; Q++)   {
 if   (*Q  < *oUo)   {
 int   J2  =  *Q;   *Q =  *hcdh;   *hcdh  = J2;
 hcdh++;
 }
  }
   int J2 = *hcdh;  *hcdh  =  *oUo; *oUo = J2;
 Krh(haH,   d3, (int)(hcdh   - haH)  - 1);
 Krh(haH, (int)(hcdh   -   haH) + 1, vbq);
}

int   main(int   argc,   char  *argv[]) {
  if (argc < 2)   return  0;
   int   AF  = argc  -   1;
  int  *haH  = (int   *)malloc(AF  *  sizeof(int));
  for   (int h  =   0; h <  AF;  h++) haH[h]   =  atoi(argv[h  + 1]);

 Krh(haH,   0, AF  - 1);

 for  (int  h   =   0;   h <   AF;  h++)  {
 printf("%d%s",  haH[h], (h  ==   AF  - 1  ?  ""   : " "));
 }
  printf("\n");
 free(haH);
   return   0;
}