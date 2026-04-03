/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A05_F11_S_Exponential.c
 * Implementation Logic: Exponential search followed by binary search in a range.
 */


#include <stdio.h>
#include <stdlib.h>

int g8(int  E[],  int   gQO,  int  qQ1) {
 if  (gQO  == 0)   return -1;
 if   (E[0]   ==   qQ1) return  0;
 int vRY  =  1;
  while (vRY <   gQO &&   E[vRY] <= qQ1) vRY  =  vRY   *   2;

 int   W   =   vRY   /   2,  KQ   =   (vRY  < gQO  - 1)  ?  vRY :   gQO  -  1;
   while (W <= KQ) {
   int rvd =  W +  (KQ  -  W)   / 2;
  if (E[rvd]   ==   qQ1) return rvd;
  if (E[rvd] <   qQ1)   W   = rvd   + 1;
  else KQ   =   rvd - 1;
   }
   return   -1;
}

int main(int  argc, char   *argv[])   {
  if   (argc   < 3)  return   1;
 int qQ1  = atoi(argv[1]);
   int   gQO  = argc   -  2;
  int *E  =   (int*)malloc(gQO  *   sizeof(int));
  for(int  vRY=0; vRY<gQO;   vRY++) E[vRY]   =  atoi(argv[vRY+2]);
  printf("%d\n",   g8(E,   gQO,  qQ1));
 free(E);
 return  0;
}