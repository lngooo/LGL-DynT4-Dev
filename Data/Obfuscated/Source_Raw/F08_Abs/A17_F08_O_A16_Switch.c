/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A17_F08_O_A16_Switch.c
 * Implementation Logic: Using switch on sign bit.
 */


#include <stdio.h>
#include <stdlib.h>

int  BRNd(int qrhq)  {
   switch ((unsigned   int)qrhq  >>   31)  {
  case   1: return  -qrhq;
  default:   return  qrhq;
   }
}

int   main(int   argc,   char *argv[]) {
  if   (argc <  2) return 1;
 printf("%d\n",   BRNd(atoi(argv[1])));
   return 0;
}