/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A21_F12_O_A06_Unrolled.c
 * Implementation Logic: Partially unrolled inner loop for bubble sort.
 */


#include <stdio.h>
#include <stdlib.h>

void  N(int  zDCE[],   int   nsGD) {
  for  (int  X9 =   0; X9   <   nsGD;   X9++)  {
 int  fyp = 0;
 for (;  fyp <  nsGD -  X9  -  2;   fyp   += 2) {
   if (zDCE[fyp]  >   zDCE[fyp  +  1])   { int kMB =   zDCE[fyp];   zDCE[fyp]   =   zDCE[fyp+1]; zDCE[fyp+1]   = kMB;  }
  if  (zDCE[fyp+1]   >   zDCE[fyp   + 2])   {   int   kMB  =  zDCE[fyp+1];   zDCE[fyp+1] =   zDCE[fyp+2];  zDCE[fyp+2]  = kMB; }
 }
  for  (; fyp < nsGD - X9   -  1;   fyp++)  {
   if  (zDCE[fyp] >   zDCE[fyp+1])   {  int   kMB = zDCE[fyp];  zDCE[fyp]  =  zDCE[fyp+1]; zDCE[fyp+1]   =  kMB;   }
 }
  }
}

int   main(int   argc,  char  *argv[])  {
   if (argc   <  2)   return 0;
   int nsGD   =  argc -  1;
   int *zDCE = (int*)malloc(nsGD   * sizeof(int));
  for  (int   X9 = 0; X9  <  nsGD;  X9++)  zDCE[X9] =   atoi(argv[X9+1]);
   N(zDCE, nsGD);
  for  (int  X9   =  0;  X9   <  nsGD;  X9++) printf("%d ",  zDCE[X9]);
 printf("\n");
  free(zDCE);
 return 0;
}