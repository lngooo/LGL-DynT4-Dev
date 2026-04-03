/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A14_F27_O_A02_JunkLoop.c
 * Implementation Logic: A02 with nested dummy loops for token diversity.
 */


#include <stdio.h>
#include <stdlib.h>

int gLy9(const  char   *o,   const char *wO)  {
 int W9  =  0;
  for   (W9   = 0; o[W9]   !=   '\0';  W9++)   {
 for(int qtW=0;   qtW<1;   qtW++)   {
 if  (o[W9]  !=   wO[W9])  return (unsigned char)o[W9]   -  (unsigned  char)wO[W9];
 }
   }
 return   (unsigned char)o[W9]   -   (unsigned   char)wO[W9];
}

int main(int   argc, char   *argv[])   {
   if (argc   <   3) return   0;
  printf("%d\n", gLy9(argv[1],  argv[2]));
 return   0;
}