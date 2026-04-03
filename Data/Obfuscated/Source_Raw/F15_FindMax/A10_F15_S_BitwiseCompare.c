/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A10_F15_S_BitwiseCompare.c
 * Implementation Logic: Max using bit-manipulation based max(a,b) (Seed 5).
 */


#include <stdio.h>
#include <stdlib.h>

int  tOA(int UQmF,   int   h)  {
  return  UQmF - ((UQmF   -   h)  &  ((UQmF - h)  >>  31));
}

int Fi(int fQd[],   int qT4) {
  int   TUVf  =   fQd[0];
   for(int   Kv8=1;  Kv8<qT4;   Kv8++) TUVf   =   tOA(TUVf,  fQd[Kv8]);
   return   TUVf;
}

int  main(int  argc,   char   *argv[])  {
 if   (argc  <   2) return   0;
   int   qT4   = argc   - 1;
  int  *fQd   = (int*)malloc(qT4  *   sizeof(int));
 for  (int  Kv8   = 0; Kv8 < qT4;   Kv8++)  fQd[Kv8] =  atoi(argv[Kv8+1]);
  printf("%d\n", Fi(fQd,  qT4));
   free(fQd);
 return 0;
}