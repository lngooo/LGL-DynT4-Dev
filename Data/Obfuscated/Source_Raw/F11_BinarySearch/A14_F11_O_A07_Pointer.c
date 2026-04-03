/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A14_F11_O_A07_Pointer.c
 * Implementation Logic: Bitwise search using pointer arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

int  X0(int  PXJ8[],  int YFJA2,   int TrM)   {
   int   *H7  =  PXJ8;
   int   mGC  =  0;
   int YNbI2   =   1  <<   (31  -   __builtin_clz(YFJA2));
 while (YNbI2  >   0)   {
 int  Uu   = mGC   |   YNbI2;
  if   (Uu   < YFJA2  &&   *(H7 +   Uu)   <= TrM)  mGC =   Uu;
  YNbI2 >>=   1;
  }
  return  (*(H7   +   mGC)  ==   TrM)  ?   mGC : -1;
}

int   main(int argc, char  *argv[])   {
 if   (argc  <  3)  return  1;
 int   TrM  =  atoi(argv[1]);
   int  YFJA2 = argc  -   2;
  int *PXJ8   = (int*)malloc(YFJA2   * sizeof(int));
   for(int   CY9=0;   CY9<YFJA2;   CY9++)  PXJ8[CY9]  = atoi(argv[CY9+2]);
 printf("%d\n",   X0(PXJ8,   YFJA2, TrM));
  free(PXJ8);
  return 0;
}