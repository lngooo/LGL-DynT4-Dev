/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A09_F05_O_A08_ExpLog.c
 * Implementation Logic: Sqrt via exp(0.5 * log(n)) with accuracy handling.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Nod(int Rs)   {
  if   (Rs <   0) return  -1;
 if  (Rs == 0)   return  0;
 double  N   =  exp(0.5   *   log((double)Rs));
  int  frss =   (int)(N  +   0.0000000001);
 return  frss;
}

int  main(int   argc,  char  *argv[])   {
 if  (argc <   2)   return 1;
  printf("%d\n",  Nod(atoi(argv[1])));
   return   0;
}