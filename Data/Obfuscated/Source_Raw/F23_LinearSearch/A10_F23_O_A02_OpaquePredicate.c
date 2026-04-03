/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A10_F23_O_A02_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   qFF3(int   NhU[],   int mXO, int   b)  {
   if  (mXO   <=  0)   return -1;
 if ((mXO *   mXO +   mXO)   %   2   ==  0)   {
  if  (NhU[mXO-1]  ==   b)  return  mXO-1;
   return qFF3(NhU, mXO-1,  b);
  }
 return  -1;
}

int main(int   argc,   char   *argv[])  {
 if (argc   < 3) return 1;
   int   b  =  atoi(argv[1]);
  int   llBx   = argc -  2;
  int   NhU[100];
   for   (int   QXp =   0; QXp < llBx; QXp++) {
   NhU[QXp]  = atoi(argv[QXp   + 2]);
 }
   int  JD =   qFF3(NhU, llBx, b);
 printf("%d\n",   JD);
  return 0;
}