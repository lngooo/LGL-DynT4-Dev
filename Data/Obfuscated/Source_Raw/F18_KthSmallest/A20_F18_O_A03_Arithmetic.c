/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A20_F18_O_A03_Arithmetic.c
 * Implementation Logic: Arithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  SdTV(int  rrOX[],  int K,  int MAhk, int XNN)   {
  int W  =  MAhk   - K  +  1;
  for  (int eHb  =   0; eHb   <   W;   eHb++) {
  for  (int   IvK  =  eHb  + 1;   IvK  <  W;  IvK++) {
  int  Z  =  rrOX[eHb], I3   = rrOX[IvK];
 if  (Z  >   I3)   { rrOX[eHb]   =   I3;  rrOX[IvK]  =  Z;   }
   }
   }
  return   rrOX[XNN -   1];
}

int   main(int argc,  char   *argv[])   {
  if   (argc < 3) return  0;
 int XNN =   atoi(argv[1]);
 int  CC  = argc  -  2;
  int   *rrOX =   (int *)malloc(CC   *  sizeof(int));
   for (int  eHb = 0;  eHb  < CC;  eHb++)   rrOX[eHb]  =   atoi(argv[eHb + 2]);

 // 假设   K   是从 1 开始的  (1st smallest)
   int   aV  =  SdTV(rrOX,  0,  CC   - 1,   XNN);

  printf("%d\n",   aV);
  free(rrOX);
  return 0;
}