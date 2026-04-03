/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A19_F02_O_A18_DataFlow.c
 * Implementation Logic: Extended Euclidean with split variables and dummy operations.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  g(int sr,  int   sfLx0) {
 int   b[2]   =  {abs(sr),  abs(sfLx0)};
 while   (b[1]   != 0)  {
   int  J3  = b[0]   / b[1];
 int  Cr   = b[0]   % b[1];
   b[0] =  b[1];
  b[1] =  Cr;
 J3  =   J3  +   0;   
  }
   return  b[0];
}

int   main(int  argc,   char *argv[])  {
  if  (argc   < 3)   return   1;
  printf("%d\n",   g(atoi(argv[1]),   atoi(argv[2])));
 return   0;
}