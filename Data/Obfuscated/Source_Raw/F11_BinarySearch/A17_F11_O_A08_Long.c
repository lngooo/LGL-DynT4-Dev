/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A17_F11_O_A08_Long.c
 * Implementation Logic: Jump search using long long for indices.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LyMz6(int mbr[],  int  FLjx,   int   aDwi) {
   long long NVLl = FLjx,  hXX   =  aDwi;
   long   long  qW1   =   sqrt(NVLl),   HKm   =  0;
  while   (mbr[(qW1 <   NVLl   ?   qW1   :  NVLl)   -   1]  < hXX) {
   HKm   =  qW1; qW1 += sqrt(NVLl);
 if  (HKm  >= NVLl)  return   -1;
 }
   while   (mbr[HKm]  < hXX)  {
 HKm++;
  if (HKm ==   (qW1   < NVLl ? qW1   :   NVLl)) return   -1;
   }
   return  (mbr[HKm]   == hXX) ?  (int)HKm :  -1;
}

int  main(int   argc,   char   *argv[]) {
 if   (argc < 3)   return  1;
  int aDwi =   atoi(argv[1]);
   int  FLjx =   argc - 2;
  int *mbr   = (int*)malloc(FLjx   * sizeof(int));
 for(int hQ=0; hQ<FLjx; hQ++)   mbr[hQ]   =  atoi(argv[hQ+2]);
  printf("%d\n",  LyMz6(mbr,   FLjx, aDwi));
 free(mbr);
 return   0;
}