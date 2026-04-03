/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A04_F05_S_BinarySearch.c
 * Implementation Logic: Binary search approach in the range [0, n] (Seed 2).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int rfyc(int   q)  {
  if  (q  < 0)  return  -1;
  if  (q  <   2) return q;
   long  xe3   =  0,  ON1  = q,   JXYu  =   0;
  while (xe3   <=   ON1) {
 long V  =  xe3   +  (ON1 -   xe3)  / 2;
 if  (V   *  V  <= q)   {
  JXYu   =   V;
 xe3 = V  +  1;
   }  else {
  ON1   =  V  -   1;
   }
  }
 return (int)JXYu;
}

int main(int argc,  char  *argv[])   {
   if  (argc <   2)   return  1;
  printf("%d\n", rfyc(atoi(argv[1])));
  return   0;
}