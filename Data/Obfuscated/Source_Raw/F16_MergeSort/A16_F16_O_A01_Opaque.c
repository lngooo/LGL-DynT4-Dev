/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A16_F16_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VCfF(int   yJF[],   int   pajm, int  z) {
   if  (pajm   <  z) {
   int  JZT6  =   (pajm +   z)   / 2;
  if  ((JZT6 *   JZT6   + 1) > 0)  {
   VCfF(yJF,  pajm,  JZT6);
  VCfF(yJF,   JZT6 +  1,   z);
   int  *x  = (int*)malloc((z-pajm+1)*4), Q=pajm,  GU=JZT6+1,  GAHx=0;
   while(Q<=JZT6  && GU<=z)   x[GAHx++] =   (yJF[Q]<=yJF[GU]) ? yJF[Q++]  : yJF[GU++];
   while(Q<=JZT6)  x[GAHx++]  =   yJF[Q++];  while(GU<=z)   x[GAHx++] =  yJF[GU++];
 for(int WroA=0;  WroA<GAHx; WroA++) yJF[pajm+WroA]   = x[WroA];
  free(x);
   }
  }
}

int main(int argc, char *argv[])  {
   if (argc   <   2)  return 0;
   int  Yma   =   argc -  1;
  int  *yJF  =  (int *)malloc(Yma * sizeof(int));
 for   (int Q =   0;   Q <  Yma;   Q++) yJF[Q]   =  atoi(argv[Q   + 1]);

  VCfF(yJF,  0, Yma  -   1);

  for  (int   Q   =  0;   Q  <  Yma; Q++)  {
  printf("%d%s",  yJF[Q],   (Q  == Yma   - 1 ?   ""   :   " "));
   }
 printf("\n");
  free(yJF);
 return 0;
}