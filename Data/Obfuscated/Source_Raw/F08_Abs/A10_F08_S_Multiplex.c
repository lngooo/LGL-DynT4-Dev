/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A10_F08_S_Multiplex.c
 * Implementation Logic: Multiplexing using sign bit (Seed 5).
 */


#include <stdio.h>
#include <stdlib.h>

int   LE(int   h9)   {
   int   Jxq9[2]  =  {h9,  -h9};
  int  Xfp = (h9 <   0);
   return Jxq9[Xfp];
}

int  main(int   argc,  char   *argv[])   {
  if (argc  <  2) return 1;
  printf("%d\n",  LE(atoi(argv[1])));
  return  0;
}