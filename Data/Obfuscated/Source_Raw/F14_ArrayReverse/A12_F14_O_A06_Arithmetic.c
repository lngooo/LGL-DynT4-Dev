/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A12_F14_O_A06_Arithmetic.c
 * Implementation Logic: Pointer version with complex arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

void a(int   vFIZ[], int  z)   {
   int   *y8  = vFIZ;
 for(int  g = 0;   g   <  (z  >>   1); g++) {
  int *hh2   = y8 +  g;
   int *oB  = y8  +  (z - 1   -   g);
   *hh2 ^= *oB;  *oB  ^= *hh2;   *hh2   ^=   *oB;
  }
}

int  main(int   argc, char   *argv[])  {
   if (argc < 2)   return 0;
 int z  = argc   -  1;
   int  *vFIZ =  (int*)malloc(z *   sizeof(int));
  for(int g=0;   g<z; g++)   vFIZ[g]  =  atoi(argv[g+1]);
  a(vFIZ,   z);
  for(int  g=0;  g<z;   g++)   printf("%d ", vFIZ[g]);
   printf("\n");
 free(vFIZ);
 return 0;
}