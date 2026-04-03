/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A05_F23_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   S0(int  kJY1[],   int ikzy4,   int   jf4)  {
 int   *Yf   = kJY1;
 for (int  jAIT = 0;  jAIT  < ikzy4;   jAIT++)  {
 if (*(Yf  +   jAIT)  ==   jf4) return   jAIT;
   }
  return -1;
}

int main(int   argc,  char *argv[])   {
   if   (argc <  3) return 1;
  int  jf4  =   atoi(argv[1]);
 int   V3  =  argc - 2;
   int   kJY1[100];
   for (int  jAIT  = 0;  jAIT  <   V3;   jAIT++) {
   kJY1[jAIT]   = atoi(argv[jAIT +  2]);
   }
 int   x2   =   S0(kJY1,   V3,  jf4);
  printf("%d\n",   x2);
   return 0;
}