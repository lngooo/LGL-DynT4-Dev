/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A02_F12_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for nested loops.
 */


#include <stdio.h>
#include <stdlib.h>

void  fyv(int  RB[],  int  kqvK8)  {
  int   rFt0 =   0,  PpY0  =  0, VZJ8 =   0;
   while (VZJ8  != 4) {
  switch  (VZJ8)  {
  case 0:   if (rFt0  <  kqvK8   -  1) { PpY0  =   0;  VZJ8   =   1;  } else VZJ8 =   4;   break;
  case 1: if (PpY0 < kqvK8  - rFt0  -  1)  VZJ8   =   2;  else  {  rFt0++; VZJ8  =   0; }  break;
 case 2: 
 if  (RB[PpY0]   > RB[PpY0 +  1])   {
  int   wvqw4   =   RB[PpY0];  RB[PpY0] = RB[PpY0+1];   RB[PpY0+1] = wvqw4;
  }
   PpY0++;   VZJ8  =  1;   break;
  }
   }
}

int main(int argc, char *argv[])   {
   if  (argc  < 2)  return  0;
 int   kqvK8  =  argc -   1;
  int *RB =   (int*)malloc(kqvK8 * sizeof(int));
 for (int   rFt0  = 0;   rFt0  <  kqvK8; rFt0++)  RB[rFt0]  =   atoi(argv[rFt0+1]);
   fyv(RB,   kqvK8);
  for   (int rFt0  =   0;  rFt0   < kqvK8;  rFt0++)  printf("%d ",   RB[rFt0]);
 printf("\n");
  free(RB);
 return 0;
}