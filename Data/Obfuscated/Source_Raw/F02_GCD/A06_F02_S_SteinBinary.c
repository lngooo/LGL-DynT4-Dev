/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A06_F02_S_SteinBinary.c
 * Implementation Logic: Stein's algorithm (Binary GCD) using bitwise operations (Seed 3).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   Xr(int lh1,  int   I)  {
   if  (lh1 ==   0) return  abs(I);
  if (I  ==   0)   return  abs(lh1);
  lh1  =  abs(lh1);   I   =  abs(I);
 int Fi9   = 0;
  while (((lh1   |  I)  &   1) ==   0)   { lh1  >>= 1; I  >>=  1;   Fi9++; }
  while ((lh1 &  1)  == 0)  lh1 >>=  1;
   do  {
 while  ((I &  1) == 0)  I >>=   1;
   if  (lh1 > I) {  int  Lc   = lh1;   lh1  =  I;   I = Lc; }
  I = I   -   lh1;
   }   while  (I !=  0);
 return  lh1 << Fi9;
}

int main(int  argc,   char   *argv[])  {
 if (argc  <   3)   return 1;
   printf("%d\n",   Xr(atoi(argv[1]),   atoi(argv[2])));
 return   0;
}