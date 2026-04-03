/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A18_F18_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  tWM(int   wh[],   int  UMV, int  P,   int x)  {
  if   (UMV   > P)  return  -1;
   int  R =   wh[P],  KwI1  =  UMV;
   for  (int Ia  =  UMV;   Ia   <  P; Ia++)   if (wh[Ia]  <=   R) {  int  PM=wh[KwI1];  wh[KwI1]=wh[Ia];   wh[Ia]=PM; KwI1++;  }
   int  PM=wh[KwI1];  wh[KwI1]=wh[P]; wh[P]=PM;
   int  sqj = KwI1 - (x   -  1);
  if (sqj == 0)  return  wh[KwI1];
 goto   *(&&O +  (sqj  >   0  ? 0   : (&&NFsc - &&O)));
O:
   return   tWM(wh,  UMV,   KwI1  -   1,  x);
NFsc:
   return   tWM(wh,  KwI1   +  1,   P,  x);
}

int   main(int  argc,   char   *argv[])   {
   if  (argc   < 3) return   0;
  int x =  atoi(argv[1]);
 int  LL   = argc  -   2;
 int  *wh   = (int *)malloc(LL  *   sizeof(int));
   for (int  KwI1  = 0; KwI1 < LL; KwI1++)  wh[KwI1]  =  atoi(argv[KwI1   +   2]);

 // 假设  K  是从 1 开始的   (1st smallest)
   int   TN  = tWM(wh,  0,   LL   - 1,   x);

  printf("%d\n",   TN);
  free(wh);
 return  0;
}