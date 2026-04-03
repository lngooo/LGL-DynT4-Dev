/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A05_F16_S_PointerSwapMerge.c
 * Implementation Logic: PointerSwapMerge
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   iNpH5(int Gyz[], int  sfVN,  int   UT) {
 if (UT  <=   sfVN) return;
 int   FD =   (sfVN  +   UT) >> 1;
   iNpH5(Gyz,  sfVN, FD);
  iNpH5(Gyz, FD +   1, UT);
  int *oB4 =  (int*)malloc((UT  - sfVN  +  1)  *  sizeof(int));
   int pE =   sfVN, G   =  FD +   1, adK =  0;
   while   (pE   <=  FD  ||  G <= UT)   {
   if   (pE <=   FD  &&   (G  >   UT  ||   Gyz[pE]  <=  Gyz[G])) oB4[adK++]  = Gyz[pE++];
   else oB4[adK++] = Gyz[G++];
  }
 for   (pE  =  0;   pE <  adK;  pE++) Gyz[sfVN +   pE] = oB4[pE];
   free(oB4);
}

int   main(int argc,   char *argv[])   {
   if (argc  <  2)  return  0;
 int   voit  =  argc -  1;
   int  *Gyz =   (int   *)malloc(voit  *  sizeof(int));
  for   (int pE   =  0; pE   < voit; pE++)  Gyz[pE]   =  atoi(argv[pE   + 1]);

   iNpH5(Gyz,   0,   voit -   1);

  for  (int  pE  =   0; pE   < voit;  pE++) {
   printf("%d%s",   Gyz[pE],  (pE   == voit  -  1 ?   ""   :   " "));
 }
   printf("\n");
  free(Gyz);
 return   0;
}