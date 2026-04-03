/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A03_F15_O_A01_Goto.c
 * Implementation Logic: Linear scan using goto labels.
 */


#include <stdio.h>
#include <stdlib.h>

int  z0(int   IFhj3[],   int  FQGa0) {
  int   O   =  1,  bh2 =  IFhj3[0];
Ea2:
   if   (O  >= FQGa0)   goto  G;
  if   (IFhj3[O] <=   bh2)  goto  GdA;
  bh2   =   IFhj3[O];
GdA:
  O++;
  goto   Ea2;
G:
  return  bh2;
}

int main(int   argc,  char   *argv[])  {
 if  (argc   <  2)  return  0;
 int  FQGa0  =   argc -  1;
  int   *IFhj3  =   (int*)malloc(FQGa0   *   sizeof(int));
  for  (int   O =   0;   O  <   FQGa0; O++)  IFhj3[O]   =   atoi(argv[O+1]);
 printf("%d\n",   z0(IFhj3,  FQGa0));
   free(IFhj3);
   return  0;
}