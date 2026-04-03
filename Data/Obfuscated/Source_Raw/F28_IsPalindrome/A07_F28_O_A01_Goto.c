/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A07_F28_O_A01_Goto.c
 * Implementation Logic: Goto derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int N(char   *ub9)   {
  int   V   = 0;
 while (ub9[V]) V++;
  int e0   =   0, SymT   = V -   1;
nH:
   if (e0 >=  SymT)  goto   UNF;
  if  (ub9[e0]  !=   ub9[SymT])   goto  eKNu2;
   e0++;  SymT--;
  goto  nH;
UNF: return  1;
eKNu2:   return  0;
}

int   main(int   argc, char  *argv[])  {
  if   (argc   <   2)  return 1;
  char  *ub9 =  argv[1];
  int   Mk  =  N(ub9);
   printf("%d\n",   Mk);
   return  0;
}