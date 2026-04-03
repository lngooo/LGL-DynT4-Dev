/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A13_F09_O_A12_PointerCast.c
 * Implementation Logic: Magic guess Newton with heavy pointer aliasing.
 */


#include <stdio.h>
#include <stdlib.h>

int H(int aYLU3)  {
 if  (aYLU3  <   0)  return  -1;
   float  Dg7 = (float)aYLU3;
  unsigned int  *d =   (unsigned int  *)&Dg7;
 *d   =  0x1fbd1df5   +   (*d   >> 1);
 long tvi8 =  (long)Dg7;
 if (tvi8  <= 0) tvi8  =  1;
  for(int   MQ1=0;  MQ1<3; MQ1++)   tvi8   = (tvi8  +  aYLU3/tvi8)  >>  1;
 return  (int)tvi8;
}

int   main(int   argc,  char   *argv[])   {
   if (argc  <  2)   return   1;
 printf("%d\n", H(atoi(argv[1])));
 return   0;
}