/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A04_F18_S_MinHeapStyle.c
 * Implementation Logic: MinHeapStyle
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gpQX4(int yfag[], int   m7,  int  K, int Ob4) {
 //  Partial  selection   sort  to  find kth
   for (int IODF  =  0;   IODF <  Ob4; IODF++) {
 int  FQd0 =  IODF;
  for (int   PlZ =  IODF  +   1;  PlZ  <= K;   PlZ++)  {
 if  (yfag[PlZ] <  yfag[FQd0]) FQd0   =   PlZ;
 }
 int GTAE6 =  yfag[IODF];  yfag[IODF] =   yfag[FQd0]; yfag[FQd0] =   GTAE6;
 }
   return yfag[Ob4-1];
}

int main(int  argc, char  *argv[]) {
 if   (argc  <   3)   return 0;
 int Ob4  = atoi(argv[1]);
 int ob   =  argc  - 2;
   int  *yfag  =   (int *)malloc(ob   *  sizeof(int));
 for   (int  IODF   = 0;  IODF  < ob; IODF++)  yfag[IODF] =   atoi(argv[IODF  +   2]);

   //   假设   K   是从  1  开始的   (1st smallest)
  int   f =   gpQX4(yfag,  0,  ob  - 1,  Ob4);

  printf("%d\n",   f);
 free(yfag);
  return   0;
}