/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A01_F01_S_Loop.c
 * Implementation Logic: Basic iterative approach using a for loop.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   b3(int   MJ)   {
   int  E1 =  0;
   for  (int mF =   1;  mF  <=  MJ; mF++) {
  E1 += mF;
  }
 return  E1;
}

int  main(int   argc,  char *argv[])   {
  if   (argc <  2) return   1;
  int   MJ   =  atoi(argv[1]);
   printf("%d\n", b3(MJ));
   return 0;
}