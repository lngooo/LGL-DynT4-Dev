/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A14_F14_O_A03_Dummy.c
 * Implementation Logic: Midpoint swap with junk loops.
 */


#include <stdio.h>
#include <stdlib.h>

void   HVh(int o[],  int  Fu)   {
 for  (int x4  = 0; x4  < Fu / 2; x4++)   {
 for(int   FR1=0; FR1<1;  FR1++)   {
  int yWjg = o[x4];
 o[x4]  = o[Fu   -   1 - x4];
   o[Fu -   1 - x4]  =   yWjg;
 }
  }
}

int   main(int  argc, char   *argv[]) {
 if (argc   < 2) return   0;
   int   Fu  =  argc -  1;
 int *o  =  (int*)malloc(Fu   *   sizeof(int));
   for(int  x4=0;   x4<Fu;  x4++) o[x4]   =   atoi(argv[x4+1]);
  HVh(o,  Fu);
   for(int  x4=0; x4<Fu;   x4++)  printf("%d ",   o[x4]);
   printf("\n");
 free(o);
 return 0;
}