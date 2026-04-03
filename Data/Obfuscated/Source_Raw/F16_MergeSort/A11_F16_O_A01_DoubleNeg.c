/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A11_F16_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void w(int   FwUG[], int   GL, int  J5)   {
  if (!!(GL <  J5))  {
   int  b4   =  GL   +   (J5  - GL) / 2;
 w(FwUG,  GL,  b4);
  w(FwUG,  b4 + 1,  J5);
 int  *KgT0  =  (int*)malloc((J5-GL+1)*4);
   int  k7 = GL,   gq8   =  b4  +   1,  aV   = 0;
 while  (!!(k7   <=   b4) &&  !!(gq8  <=  J5)) KgT0[aV++]   =  (FwUG[k7]   <= FwUG[gq8])   ? FwUG[k7++]   : FwUG[gq8++];
  while (!!(k7 <=  b4)) KgT0[aV++]  = FwUG[k7++];
   while   (!!(gq8  <=   J5))   KgT0[aV++]   =  FwUG[gq8++];
 for   (int   TH7 = 0;  TH7 <   aV;  TH7++)  FwUG[GL +   TH7] =   KgT0[TH7];
 free(KgT0);
 }
}

int   main(int   argc, char  *argv[])   {
   if (argc  <   2)  return   0;
  int PDY  =  argc   - 1;
   int   *FwUG  =  (int  *)malloc(PDY *  sizeof(int));
   for   (int k7   =  0; k7 < PDY; k7++)  FwUG[k7] =  atoi(argv[k7  +   1]);

   w(FwUG,  0, PDY  -  1);

   for   (int   k7   = 0;  k7 < PDY; k7++)  {
  printf("%d%s",   FwUG[k7],   (k7 == PDY -  1  ?   ""   : " "));
   }
   printf("\n");
  free(FwUG);
 return   0;
}