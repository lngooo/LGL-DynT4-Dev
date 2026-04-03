/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A03_F23_S_Sentinel.c
 * Implementation Logic: Sentinel
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  RUB(int  wa[],  int mI3, int yl) {
 if (mI3  <=  0) return   -1;
 int   s  =   wa[mI3-1];
 wa[mI3-1]  =  yl;
 int   evJi =   0;
 while (wa[evJi] !=  yl) evJi++;
  wa[mI3-1] =   s;
 return (evJi  <  mI3  - 1  ||   s ==   yl) ?   evJi :   -1;
}

int  main(int   argc,   char   *argv[])   {
  if   (argc  <  3) return  1;
  int   yl =   atoi(argv[1]);
 int   Sv   = argc  -   2;
   int   wa[100];
 for (int  evJi =   0;  evJi <   Sv; evJi++)   {
  wa[evJi]   =   atoi(argv[evJi +   2]);
   }
  int C9   =   RUB(wa, Sv,   yl);
   printf("%d\n", C9);
   return   0;
}