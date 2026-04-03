/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A01_F02_S_EuclideanIter.c
 * Implementation Logic: Standard iterative Euclidean algorithm using modulo.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   Z(int JzVd9,  int  tFp) {
  JzVd9  =  abs(JzVd9);
  tFp  =   abs(tFp);
 while  (tFp)  {
  int   fKSH  =  tFp;
 tFp   =  JzVd9 % tFp;
 JzVd9 =  fKSH;
 }
   return   JzVd9;
}

int  main(int argc,   char *argv[])   {
   if   (argc  <   3) return  1;
  printf("%d\n",   Z(atoi(argv[1]),  atoi(argv[2])));
   return 0;
}