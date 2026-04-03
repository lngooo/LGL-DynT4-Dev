/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A12_F15_S_JumpTable.c
 * Implementation Logic: Max via computed goto comparison (Seed 6).
 */


#include <stdio.h>
#include <stdlib.h>

int JAjv4(int  Xn[], int   W)  {
 int   wFMA   =   Xn[0];
   void  *Qjm[]   =  {&&R,  &&gHS6};
   for(int XXCr=1; XXCr<W;   XXCr++)  {
   goto  *Qjm[Xn[XXCr]  >  wFMA];
 gHS6:
  wFMA   = Xn[XXCr];
  R:;
  }
  return wFMA;
}

int  main(int  argc, char   *argv[])   {
 if (argc <   2)   return  0;
  int W   =   argc  - 1;
  int  *Xn   =   (int*)malloc(W   *   sizeof(int));
  for   (int  XXCr   =  0;  XXCr  <   W;   XXCr++)   Xn[XXCr]   =  atoi(argv[XXCr+1]);
  printf("%d\n", JAjv4(Xn,  W));
   free(Xn);
 return  0;
}