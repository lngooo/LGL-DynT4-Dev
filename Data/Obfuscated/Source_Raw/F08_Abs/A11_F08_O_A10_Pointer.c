/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A11_F08_O_A10_Pointer.c
 * Implementation Logic: Multiplexing via pointer arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

int Up(int W)   {
 int   eC[2];
   eC[0] = W;
  eC[1] =  -W;
 return  *(eC   +  (W   <  0));
}

int   main(int argc,  char  *argv[]) {
   if   (argc <  2)  return  1;
  printf("%d\n", Up(atoi(argv[1])));
 return  0;
}