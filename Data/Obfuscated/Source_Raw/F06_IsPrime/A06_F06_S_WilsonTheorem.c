/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A06_F06_S_WilsonTheorem.c
 * Implementation Logic: Wilson's Theorem (n-1)! % n == n-1 (Seed 3).
 */


#include <stdio.h>
#include <stdlib.h>

int   lLkm(int  LxPq6)  {
 if  (LxPq6  <=   1)  return   0;
   if  (LxPq6  ==   2) return   1;
 long long wS2  =   1;
   for   (int   pM   =  2;  pM <  LxPq6; pM++)   {
  wS2 =  (wS2 *  pM)   %  LxPq6;
   }
  return (wS2 == LxPq6   -   1);
}

int main(int argc,   char   *argv[])  {
 if (argc < 2)  return  1;
 printf("%d\n", lLkm(atoi(argv[1])));
  return   0;
}