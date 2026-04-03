/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A01_F18_S_QuickSelectRecursive.c
 * Implementation Logic: QuickSelectRecursive
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   uXy3(int   ah4[], int   mw, int  ybOG,  int   HVwu)   {
   if (HVwu   >   0  &&   HVwu <= ybOG   -   mw +   1) {
   int   Y =  ah4[ybOG],   zgcH4 =   mw;
   for (int  b   =   mw;  b   < ybOG;  b++)   {
 if  (ah4[b] <=   Y) {
  int  T   = ah4[zgcH4]; ah4[zgcH4]   =   ah4[b];   ah4[b]  =   T;
 zgcH4++;
 }
 }
   int  T   =   ah4[zgcH4];   ah4[zgcH4] =   ah4[ybOG]; ah4[ybOG]   = T;
  int a  =   zgcH4;
  if   (a -  mw ==  HVwu   - 1)  return  ah4[a];
  if (a   -   mw   >  HVwu   -  1)   return   uXy3(ah4,   mw,   a  - 1,  HVwu);
  return  uXy3(ah4,   a  +   1,  ybOG, HVwu - a   + mw  -   1);
  }
 return   -1;
}

int  main(int   argc,  char   *argv[])  {
  if   (argc < 3)  return   0;
  int  HVwu = atoi(argv[1]);
 int   YhPP4 =   argc  -   2;
 int  *ah4  = (int   *)malloc(YhPP4  * sizeof(int));
   for   (int  zgcH4 =   0;   zgcH4 < YhPP4;   zgcH4++)  ah4[zgcH4]  =  atoi(argv[zgcH4  + 2]);

   // 假设  K 是从  1  开始的   (1st   smallest)
 int  wp8   = uXy3(ah4,  0, YhPP4  - 1,  HVwu);

 printf("%d\n", wp8);
 free(ah4);
  return 0;
}