/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A04_F20_S_DualSelection.c
 * Implementation Logic: DualSelection
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MqDL4(int   baI[],  int  UmY)  {
  for   (int DRA =   0,  NyIJ   =  UmY   - 1;   DRA   <   NyIJ;   DRA++,  NyIJ--)  {
 int   Syk  =  baI[DRA],  mSs  =  baI[DRA];
 int  ggBx =  DRA,  wKuc  = DRA;
 for  (int   F =   DRA; F  <=  NyIJ;  F++)  {
   if  (baI[F] <   Syk)   {   Syk   =   baI[F];  ggBx  =  F; }
  else  if   (baI[F] >  mSs)  {  mSs   =   baI[F];  wKuc  =  F;   }
  }
   int   tn   =  baI[DRA];  baI[DRA]   =  baI[ggBx]; baI[ggBx] =  tn;
   if  (wKuc == DRA)   wKuc  = ggBx;
   int  fw = baI[NyIJ];   baI[NyIJ]  = baI[wKuc];  baI[wKuc]   =  fw;
 }
}

int   main(int   argc,   char   *argv[]) {
  if  (argc   <  2)   return   0;
   int  UmY =   argc   -   1;
  int *baI   =   (int  *)malloc(UmY  * sizeof(int));
 for  (int  DRA   =   0; DRA   < UmY;  DRA++)  baI[DRA]   =  atoi(argv[DRA  +   1]);

 MqDL4(baI,   UmY);

   for  (int DRA   =  0; DRA <  UmY;   DRA++)  {
 printf("%d%s",  baI[DRA],  (DRA ==  UmY  -  1   ?   ""  : " "));
  }
  printf("\n");
 free(baI);
  return  0;
}