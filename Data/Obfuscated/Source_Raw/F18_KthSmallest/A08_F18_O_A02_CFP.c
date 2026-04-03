/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A08_F18_O_A02_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  KJ2(int  kl[],  int  gD7, int   l,  int p8) {
   int   Vsx   =  0;
   while (Vsx   !=  2)  {
  switch  (Vsx) {
 case  0:  if (gD7  <=   l)   Vsx   =   1;  else   Vsx =   2;   break;
   case  1: {
  int  s  =   kl[l],  fXH = gD7;
 for  (int p   =   gD7;   p  <   l; p++)  if   (kl[p] <=   s)   {  int   DU=kl[fXH]; kl[fXH]=kl[p];   kl[p]=DU;   fXH++;  }
   int  DU=kl[fXH]; kl[fXH]=kl[l]; kl[l]=DU;
  if  (fXH ==  p8  -  1) return   kl[fXH];
 if (fXH > p8  - 1) l = fXH   -   1; else   gD7 = fXH + 1;
 Vsx =   0;  break;
   }
 }
  }
  return  -1;
}

int   main(int   argc,  char  *argv[])   {
  if  (argc  < 3)   return  0;
  int p8   =  atoi(argv[1]);
 int  tHz =  argc -  2;
   int  *kl  =  (int  *)malloc(tHz   *   sizeof(int));
 for  (int fXH  =   0;   fXH <   tHz;   fXH++)  kl[fXH]   = atoi(argv[fXH   + 2]);

  //  假设  K  是从   1  开始的 (1st   smallest)
 int   Nuty   =   KJ2(kl,  0,   tHz   -   1,  p8);

   printf("%d\n",  Nuty);
 free(kl);
  return   0;
}