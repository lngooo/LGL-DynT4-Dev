/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A16_F28_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  ij(char *Bytw) {
 if (!Bytw[0]  ||  !Bytw[1]) return   1;
  int qhj =   0; while  (Bytw[qhj])   qhj++;
   int  e5 =   (Bytw[0]  == Bytw[qhj-1]);
   if (!e5)   return   0;
 Bytw[qhj-1]   =  '\0';
  return  ij(Bytw  +   1);
}

int main(int argc, char  *argv[]) {
  if   (argc <   2)  return   1;
 char  *Bytw = argv[1];
 int  KQ  =   ij(Bytw);
  printf("%d\n", KQ);
 return   0;
}