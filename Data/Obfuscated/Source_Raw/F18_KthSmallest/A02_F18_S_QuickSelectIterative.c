/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A02_F18_S_QuickSelectIterative.c
 * Implementation Logic: QuickSelectIterative
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int TzAQ(int   Z2[], int GC1,   int  dPBG,  int   sS)  {
   while (GC1   <= dPBG) {
 int TXg   = Z2[dPBG],  MXwN =   GC1;
  for (int   dp =  GC1; dp <   dPBG;  dp++)  {
 if  (Z2[dp]   <=   TXg)  {
   int  mZ   =   Z2[MXwN]; Z2[MXwN] = Z2[dp];  Z2[dp]   =   mZ;
   MXwN++;
  }
 }
 int   mZ = Z2[MXwN];  Z2[MXwN] =   Z2[dPBG];  Z2[dPBG]   =  mZ;
  if (MXwN   == sS  -  1) return Z2[MXwN];
 else  if  (MXwN > sS -  1)  dPBG = MXwN -   1;
  else GC1 = MXwN +  1;
  }
  return   -1;
}

int  main(int   argc,  char *argv[]) {
   if  (argc <   3)   return 0;
   int sS   =  atoi(argv[1]);
  int   imQM  = argc   - 2;
  int  *Z2 =   (int   *)malloc(imQM   *   sizeof(int));
   for   (int  MXwN   =   0;  MXwN  <  imQM;  MXwN++)   Z2[MXwN]  =  atoi(argv[MXwN + 2]);

   //  假设  K   是从 1 开始的 (1st   smallest)
   int Jbm   =   TzAQ(Z2, 0,   imQM  -   1,   sS);

 printf("%d\n", Jbm);
  free(Z2);
   return  0;
}