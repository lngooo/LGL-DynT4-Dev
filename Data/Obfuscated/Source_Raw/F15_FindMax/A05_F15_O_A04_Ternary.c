/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A05_F15_O_A04_Ternary.c
 * Implementation Logic: Recursive max hidden in ternary nested logic.
 */


#include <stdio.h>
#include <stdlib.h>

int rsN7(int   W[],  int   jRvk,   int   eRRI)   {
 if (jRvk   ==   eRRI)   return  W[jRvk];
  int YLN   = jRvk + (eRRI-jRvk)/2;
  int qe   =   rsN7(W,   jRvk, YLN),  nfNb1   =  rsN7(W, YLN+1,   eRRI);
  return   (qe > nfNb1) ?  qe   : nfNb1;
}

int  uaGd(int  F[],  int P9)   { return   (P9 >   0) ? rsN7(F, 0,  P9-1) :  0;  }

int  main(int  argc,  char  *argv[]) {
   if   (argc < 2)   return  0;
  int   P9 =   argc  -   1;
  int *F =   (int*)malloc(P9   * sizeof(int));
   for  (int Xwz5  =   0;  Xwz5 < P9; Xwz5++)   F[Xwz5]   = atoi(argv[Xwz5+1]);
   printf("%d\n",   uaGd(F,  P9));
  free(F);
 return   0;
}