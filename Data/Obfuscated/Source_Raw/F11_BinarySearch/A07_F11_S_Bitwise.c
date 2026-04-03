/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A07_F11_S_Bitwise.c
 * Implementation Logic: Binary search using bit-level range determination.
 */


#include <stdio.h>
#include <stdlib.h>

int cJ(int W[],  int  PU8, int   Wo)  {
 int   UeWF4 = 0;
 int   WNC1   = 31  -   __builtin_clz(PU8);
  for   (int  I2 =   WNC1; I2 >=  0;  I2--) {
 int  MM3 =   UeWF4 |   (1  << I2);
 if (MM3 < PU8 &&  W[MM3] <=  Wo) UeWF4   = MM3;
  }
   return   (W[UeWF4]   ==   Wo)   ?   UeWF4   :   -1;
}

int  main(int  argc, char   *argv[])   {
   if   (argc <  3)  return 1;
   int  Wo  =  atoi(argv[1]);
  int   PU8 =   argc - 2;
  int  *W  =   (int*)malloc(PU8  * sizeof(int));
   for(int I2=0;   I2<PU8; I2++) W[I2] =   atoi(argv[I2+2]);
   printf("%d\n",   cJ(W, PU8,   Wo));
  free(W);
  return   0;
}