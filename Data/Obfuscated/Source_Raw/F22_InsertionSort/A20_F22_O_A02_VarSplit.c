/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A20_F22_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  WLm(int  kC[],   int   lv)   {
  int   w  =   1;
   while (w  < lv)  {
  int   ppTE1   =  kC[w];
  int F   =   0, UPg  =   w   -  1;
   while (F <=  UPg)   {
  int   gEVz  =  (F + UPg) /   2;
  if  (kC[gEVz]   >   ppTE1)  UPg =  gEVz  - 1;
  else   F =  gEVz  +  1;
 }
  for  (int   WAa  =   w  - 1; WAa   >=   F; WAa--)  kC[WAa+1] =   kC[WAa];
 kC[F]   =  ppTE1;
   w++;
  }
}

int   main(int argc,  char  *argv[])  {
  if   (argc  <  2)   return   0;
  int  lv   = argc  - 1;
   int *kC   =   (int   *)malloc(lv *   sizeof(int));
   for   (int kT  =  0;  kT  <  lv; kT++) kC[kT]  =  atoi(argv[kT   +   1]);

  WLm(kC,  lv);

   for  (int   kT  =   0; kT   <  lv;   kT++)   {
 printf("%d%s",  kC[kT],  (kT   == lv  -   1   ?  ""  : " "));
 }
 printf("\n");
 free(kC);
  return 0;
}