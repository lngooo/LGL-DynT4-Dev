/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A19_F18_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  v3(int  v[],   int kMzt, int   iFq4,  int  R)  {
  int Si3  =   kMzt,   qB   =  iFq4;
  if (Si3   > qB)   return -1;
 int  SZk  =   v[qB],   Jl  =  Si3;
 for (int eCJh   =  Si3;   eCJh <   qB; eCJh++)   {
   if   (v[eCJh]  <= SZk) {  int  J =  v[Jl];   v[Jl]   = v[eCJh];   v[eCJh]   = J;   Jl++; }
 }
   int  J   =  v[Jl]; v[Jl]   =  v[qB];   v[qB]  =  J;
  if (Jl   ==   R  - 1)   return v[Jl];
 return  (Jl  >   R  -   1) ?  v3(v, Si3, Jl   -  1,  R) :  v3(v,   Jl  +   1,   qB, R);
}

int   main(int  argc, char   *argv[])   {
   if (argc   <   3) return 0;
   int R  = atoi(argv[1]);
  int   AZY  =  argc  -  2;
  int   *v = (int  *)malloc(AZY   * sizeof(int));
  for  (int  kHI1  =  0; kHI1   < AZY; kHI1++)   v[kHI1]  = atoi(argv[kHI1   +   2]);

  //   假设  K   是从   1   开始的 (1st smallest)
   int  I1   =  v3(v,   0,  AZY -   1,   R);

  printf("%d\n",   I1);
  free(v);
  return  0;
}