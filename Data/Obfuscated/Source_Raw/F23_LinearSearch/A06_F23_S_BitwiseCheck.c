/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A06_F23_S_BitwiseCheck.c
 * Implementation Logic: BitwiseCheck
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int WW(int  J[], int  N, int  w4)  {
 for (int  fp6   = 0;  fp6   <   N; fp6++)  {
  if (!(J[fp6] ^  w4))   return  fp6;
  }
 return  -1;
}

int   main(int  argc, char *argv[]) {
 if  (argc   <   3)  return 1;
   int   w4  =   atoi(argv[1]);
  int flA   =  argc  - 2;
 int  J[100];
 for   (int  fp6 =   0; fp6 <   flA; fp6++)   {
  J[fp6]  =   atoi(argv[fp6   +  2]);
  }
   int   vK   =  WW(J,   flA,  w4);
  printf("%d\n",  vK);
 return 0;
}