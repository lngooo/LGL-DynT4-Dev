/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A01_F09_S_StandardNewton.c
 * Implementation Logic: Classic iterative Newton-Raphson (Seed 1).
 */


#include <stdio.h>
#include <stdlib.h>

int   IM(int UiZ)   {
  if (UiZ <  0) return  -1;
   if (UiZ   <   2)  return UiZ;
   long   AWu =  UiZ;
  long   d  = (AWu  +  UiZ   /   AWu) /   2;
  while (d < AWu) {
   AWu = d;
  d   =   (AWu + UiZ / AWu)   /  2;
  }
 return   (int)AWu;
}

int main(int  argc,   char   *argv[]) {
   if   (argc <  2) return  1;
   printf("%d\n",  IM(atoi(argv[1])));
 return  0;
}