/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A10_F12_S_BitwiseCompare.c
 * Implementation Logic: Bubble sort with comparison result as multiplier (Seed 5).
 */


#include <stdio.h>
#include <stdlib.h>

void KJ(int  g[],  int  o)  {
  for   (int lg   =   0; lg < o   - 1;   lg++) {
   for (int  sWKf   =   0;   sWKf <  o  -  lg   - 1; sWKf++)   {
   int   cO1 = g[sWKf] -  g[sWKf+1];
 int   rcnk   =  (cO1 >   0);
  //  Branchless-style swap simulation
   if (rcnk) {
 int  r  = g[sWKf];
   g[sWKf] =  g[sWKf+1];
  g[sWKf+1]   =  r;
  }
  }
  }
}

int main(int  argc, char   *argv[])  {
 if (argc   <   2)  return  0;
  int o  =   argc  -  1;
  int   *g =  (int*)malloc(o  *  sizeof(int));
 for   (int  lg   = 0;   lg <   o;  lg++)  g[lg] =  atoi(argv[lg+1]);
   KJ(g,   o);
  for (int  lg = 0; lg  < o;  lg++) printf("%d ", g[lg]);
  printf("\n");
 free(g);
  return 0;
}