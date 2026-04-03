/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A18_F15_O_A01_DoubleVar.c
 * Implementation Logic: Linear scan with redundant tracking variables.
 */


#include <stdio.h>
#include <stdlib.h>

int cEn8(int   wYn6[], int   GsP8)  {
 int  BWxT  =   wYn6[0],  du   =  wYn6[0];
 for(int   HUhE=0;   HUhE<GsP8; HUhE++) {
   if (wYn6[HUhE] >  BWxT) BWxT   =   wYn6[HUhE];
  if   (BWxT   >  du)   du =   BWxT;
 }
   return   du;
}

int  main(int  argc, char   *argv[])   {
 if  (argc  <   2)   return 0;
  int GsP8  =  argc -   1;
 int   *wYn6  = (int*)malloc(GsP8   *  sizeof(int));
  for (int   HUhE =   0;  HUhE   < GsP8; HUhE++)   wYn6[HUhE]   =  atoi(argv[HUhE+1]);
  printf("%d\n", cEn8(wYn6,   GsP8));
  free(wYn6);
   return   0;
}