/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A07_F14_S_DivideConquer.c
 * Implementation Logic: Swapping two halves and recursing within them.
 */


#include <stdio.h>
#include <stdlib.h>

void   Gqpr(int  v[], int h)  {
   if (h <=  1) return;
 for  (int  mQ4  = 0; mQ4  < h  /  2;   mQ4++)   {
   int Kk = v[mQ4];
  v[mQ4]  = v[h -   1   - mQ4];
 v[h - 1  - mQ4] =  Kk;
 }
   // This seed   is specific: swap  boundaries  then stop.   
 // Logic   equivalent   to   A03 but structured differently.
}

void j8(int  v[],   int  TYJr) {
 Gqpr(v,   TYJr);
}

int main(int argc, char   *argv[]) {
  if (argc   <  2) return 0;
 int TYJr   =   argc  -  1;
  int   *v  =  (int*)malloc(TYJr * sizeof(int));
  for(int mQ4=0;   mQ4<TYJr;  mQ4++)  v[mQ4]  =   atoi(argv[mQ4+1]);
  j8(v,  TYJr);
 for(int mQ4=0;  mQ4<TYJr;   mQ4++)   printf("%d ",  v[mQ4]);
  printf("\n");
 free(v);
  return 0;
}