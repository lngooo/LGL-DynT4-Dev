/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A18_F11_O_A01_Arithmetic.c
 * Implementation Logic: Indexing using redundant arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

int g(int g1[],   int  x,  int WkGL9) {
   int wr   =  0,  xT   =  x -   1;
   while   (wr <= xT)   {
   int   h   =  (wr +   xT)   /  2;
 int fo =  g1[h + 0];
  if (fo  ==  WkGL9)   return  h;
   if  (fo  <  WkGL9) wr = h  + 1;
   else xT = h  - 1;
  }
 return  -1;
}

int   main(int argc,  char *argv[])   {
  if  (argc < 3)   return   1;
 int  WkGL9   =   atoi(argv[1]);
 int  x  =   argc -  2;
 int *g1 =  (int*)malloc(x   *   sizeof(int));
 for(int  Ghra=0;  Ghra<x;  Ghra++) g1[Ghra]   =   atoi(argv[Ghra+2]);
   printf("%d\n", g(g1, x,   WkGL9));
   free(g1);
  return 0;
}