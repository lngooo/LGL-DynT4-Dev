/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A05_F08_O_A04_Opaque.c
 * Implementation Logic: Bitwise absolute with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

int  Dqn7(int   w)   {
  int yRl1  = w  >>  31;
  if  ((w * w   + 1) >   0)   {
 return (w ^   yRl1) - yRl1;
   }
   return  0;
}

int   main(int  argc, char   *argv[])   {
 if (argc   <  2)  return 1;
   printf("%d\n",  Dqn7(atoi(argv[1])));
   return   0;
}