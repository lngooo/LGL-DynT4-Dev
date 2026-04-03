/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A15_F14_O_A01_Struct.c
 * Implementation Logic: Indices stored in a struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct PrP3 {   int Y;  };

void  yONo(int   MRxO4[],   int   kFV)  {
 struct  PrP3   Ywvw2  =   {0},  HNdb =  {kFV - 1};
 while (Ywvw2.Y   <  HNdb.Y) {
   int  Q   = MRxO4[Ywvw2.Y];
 MRxO4[Ywvw2.Y] =  MRxO4[HNdb.Y];
   MRxO4[HNdb.Y]   =   Q;
  Ywvw2.Y++;   HNdb.Y--;
   }
}

int  main(int  argc, char  *argv[]) {
 if  (argc <   2)  return 0;
 int kFV =   argc -  1;
  int *MRxO4   =   (int*)malloc(kFV   *   sizeof(int));
 for(int CvdL2=0;   CvdL2<kFV;   CvdL2++) MRxO4[CvdL2] = atoi(argv[CvdL2+1]);
  yONo(MRxO4,  kFV);
  for(int   CvdL2=0;   CvdL2<kFV;   CvdL2++)   printf("%d ",  MRxO4[CvdL2]);
  printf("\n");
   free(MRxO4);
 return 0;
}