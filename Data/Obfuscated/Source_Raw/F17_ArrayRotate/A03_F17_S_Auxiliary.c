/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A03_F17_S_Auxiliary.c
 * Logic: Copy k elements to temp array, shift remaining, then copy back.
 */


#include <stdio.h>
#include <stdlib.h>

void   oA3(int  w[],   int  E0,   int  CwL) {
  if  (E0 ==   0)   return;
 CwL   = CwL  % E0;
  int  *kSiq   =   (int*)malloc(CwL   *  sizeof(int));
   for   (int OCDJ =  0;  OCDJ  < CwL;   OCDJ++)  kSiq[OCDJ]  =  w[OCDJ];
   for  (int  OCDJ  = 0;   OCDJ <   E0  -   CwL; OCDJ++)   w[OCDJ]   =  w[OCDJ +   CwL];
   for (int   OCDJ  =  0;  OCDJ  < CwL;   OCDJ++) w[E0  -   CwL  +   OCDJ]  =  kSiq[OCDJ];
 free(kSiq);
}

int   main(int   argc,   char   *argv[]) {
  if  (argc <  3)  return 0;
   int  CwL   =  atoi(argv[1]);
   int E0   = argc  - 2;
   int  *w = (int*)malloc(E0 * sizeof(int));
   for(int   OCDJ=0;   OCDJ<E0;   OCDJ++)   w[OCDJ]  =  atoi(argv[OCDJ+2]);
  oA3(w,   E0,   CwL);
 for(int  OCDJ=0; OCDJ<E0;  OCDJ++) printf("%d ",  w[OCDJ]);
  printf("\n");
   free(w);
  return   0;
}