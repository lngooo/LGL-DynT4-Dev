/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A21_F18_O_A01_PtrArithmetic.c
 * Implementation Logic: PtrArithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   NmDY(int  ffB[], int zBhk4,  int WC2,   int GfY)   {
   if  (zBhk4   > WC2)   return  -1;
  int  k   =   *(ffB   + WC2), Sap   = zBhk4;
   for (int  djD = zBhk4;   djD   <   WC2; djD++)   {
   if   (*(ffB  +   djD) <= k)  {
  int L2   = *(ffB +  Sap); *(ffB  +  Sap)   = *(ffB   +  djD); *(ffB + djD) = L2;
  Sap++;
   }
  }
 int  L2  =  *(ffB  +  Sap);  *(ffB +   Sap) =   *(ffB   +   WC2);   *(ffB   + WC2) = L2;
 if (Sap   ==  GfY  -  1)  return *(ffB  +   Sap);
   return (Sap >   GfY - 1)  ? NmDY(ffB,  zBhk4,  Sap  -   1,  GfY) :   NmDY(ffB,   Sap +  1,   WC2,  GfY);
}

int   main(int argc,  char  *argv[])  {
  if (argc <  3)  return   0;
  int  GfY  =   atoi(argv[1]);
  int DK   =   argc  -  2;
 int  *ffB  = (int  *)malloc(DK  *   sizeof(int));
  for  (int   Sap   =   0; Sap  < DK;   Sap++)  ffB[Sap]   =   atoi(argv[Sap   + 2]);

   // 假设   K  是从 1 开始的 (1st  smallest)
   int  uwZu8  = NmDY(ffB, 0,   DK  - 1,  GfY);

  printf("%d\n",  uwZu8);
  free(ffB);
   return  0;
}