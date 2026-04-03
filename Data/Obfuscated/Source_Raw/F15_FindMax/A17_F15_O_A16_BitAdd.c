/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A17_F15_O_A16_BitAdd.c
 * Implementation Logic: Backwards scan with bitwise index decrement.
 */


#include <stdio.h>
#include <stdlib.h>

int G(int sCIq,   int mPqU8)   {
  while  (mPqU8   !=  0) {   int  Ff   =   (~sCIq)  & mPqU8; sCIq   = sCIq   ^  mPqU8;  mPqU8   =   Ff <<   1; }
 return  sCIq;
}

int   rcp9(int b[], int   ZtGa)   {
   int   in  =  b[G(ZtGa, 1)];
 for(int   v8   =  G(ZtGa, 2);   v8 >= 0; v8 = G(v8,   1))   {
  if  (b[v8]   >  in)   in  =   b[v8];
 }
  return in;
}

int   main(int  argc, char *argv[])   {
  if (argc  <  2) return   0;
 int  ZtGa   =   argc   - 1;
   int *b   =   (int*)malloc(ZtGa  * sizeof(int));
  for (int  v8   = 0; v8 <  ZtGa; v8++)  b[v8]  =  atoi(argv[v8+1]);
  printf("%d\n",  rcp9(b,  ZtGa));
  free(b);
   return   0;
}