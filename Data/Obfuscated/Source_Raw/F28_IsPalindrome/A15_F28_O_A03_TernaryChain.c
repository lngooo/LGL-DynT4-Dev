/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A15_F28_O_A03_TernaryChain.c
 * Implementation Logic: TernaryChain derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int KJ(char *ym5) {
  int  Cx  =  0;  while  (ym5[Cx]) Cx++;
 for   (int Di   =  0;   Di  < Cx   /  2;   Di++) {
 int Tr   =  (ym5[Di] == ym5[Cx -   1 -  Di])  ? 1 : 0;
  if (!Tr)   return   0;
 }
   return   1;
}

int main(int  argc, char   *argv[])   {
  if   (argc < 2)   return   1;
  char  *ym5   =  argv[1];
   int   pk2  =  KJ(ym5);
  printf("%d\n",   pk2);
   return  0;
}