/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A21_F28_O_A03_CommaOp.c
 * Implementation Logic: CommaOp derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  tNk(char  *g)  {
   int  mktD =   0; while   (g[mktD])  mktD++;
  for  (int vr  =  0,   GFy  = mktD   - 1; vr   <   GFy;   vr++,   GFy--)   {
  if (vr++,  vr--,  g[vr]  != g[GFy]) return  0;
 }
   return 1;
}

int   main(int argc, char  *argv[])  {
   if (argc  <   2) return  1;
   char  *g  = argv[1];
  int   Sfl  =   tNk(g);
   printf("%d\n", Sfl);
 return   0;
}