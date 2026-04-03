/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A07_F07_S_TailRecursive.c
 * Implementation Logic: Tail-recursive power with accumulator.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int   Bax(int   GH, int  exp,  int l)  {
  if   (exp <=   0)  return   l;
  return  Bax(GH,  exp  -  1,   l  *   GH);
}

int  KOFl3(int GH, int  exp)  {
  return Bax(GH,   exp,   1);
}

int main(int   argc,  char  *argv[])  {
   if   (argc   <  3)   return  1;
   printf("%d\n",   KOFl3(atoi(argv[1]), atoi(argv[2])));
 return 0;
}