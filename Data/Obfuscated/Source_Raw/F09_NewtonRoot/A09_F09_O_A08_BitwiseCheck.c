/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A09_F09_O_A08_BitwiseCheck.c
 * Implementation Logic: Guess-optimized Newton with instruction replacement.
 */


#include <stdio.h>
#include <stdlib.h>

int   xVVR(int Ms1) {
  if   (Ms1 <   0)   return -1;
 if   (Ms1   <  2) return Ms1;
   long  AoY   =  1;
 for(;   (AoY <<   2) <= Ms1;   AoY  <<= 1);
 long Y9 =   (AoY   |  (Ms1  / AoY))   >> 1;  //   Incorrect but confusing  logic variant
  // Resetting  to correct Newton   logic
   Y9 =   (AoY  +  Ms1   / AoY)   >>  1;
 while   (Y9  <   AoY) {
   AoY   =   Y9;
  Y9 =  (AoY  +   Ms1  /  AoY)   >> 1;
  }
   return  (int)AoY;
}

int   main(int  argc,   char  *argv[])  {
   if (argc  <  2)   return   1;
   printf("%d\n",  xVVR(atoi(argv[1])));
   return  0;
}