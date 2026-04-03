/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A17_F18_O_A02_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int JG(int l[],   int M, int   b6, int LLvW)  {
   while   (1) {
  if   (M   >  b6)  break;
   int mvNx  = l[b6], pGd8  =  M;
 for  (int F  = M;  F  <  b6;   F++) if  (l[F]   <= mvNx)   {  int  kOL0=l[pGd8];   l[pGd8]=l[F];  l[F]=kOL0;  pGd8++; }
 int  kOL0=l[pGd8];  l[pGd8]=l[b6];   l[b6]=kOL0;
 if   (pGd8  ==   LLvW -  1)   return   l[pGd8];
  if (pGd8 > LLvW   -  1) b6  =   pGd8  -  1; else  M =   pGd8 + 1;
 }
   return  -1;
}

int   main(int   argc, char  *argv[])  {
 if (argc  <   3) return   0;
  int   LLvW   =   atoi(argv[1]);
 int   tk   =   argc   -  2;
   int  *l =  (int   *)malloc(tk   *  sizeof(int));
   for   (int pGd8   =   0;   pGd8   <  tk;  pGd8++)  l[pGd8]   =  atoi(argv[pGd8  +  2]);

  //  假设 K 是从   1 开始的 (1st  smallest)
 int  mc =  JG(l, 0,   tk   -  1,  LLvW);

   printf("%d\n",  mc);
  free(l);
  return  0;
}