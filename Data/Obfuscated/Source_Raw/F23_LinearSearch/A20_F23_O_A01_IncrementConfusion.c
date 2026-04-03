/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A20_F23_O_A01_IncrementConfusion.c
 * Implementation Logic: IncrementConfusion
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   dcw(int u[],  int hL,   int cXx)  {
   int N  =  -1;
   while (++N  <  hL)  {
 if (u[N] == cXx)  return   N;
   }
   return  -1;
}

int  main(int  argc, char *argv[])   {
   if  (argc < 3)   return 1;
 int  cXx   =   atoi(argv[1]);
   int  bxBv  =   argc -   2;
 int  u[100];
 for (int   N  = 0;  N < bxBv;  N++) {
 u[N] = atoi(argv[N + 2]);
 }
   int C =   dcw(u,  bxBv,   cXx);
 printf("%d\n",   C);
 return  0;
}