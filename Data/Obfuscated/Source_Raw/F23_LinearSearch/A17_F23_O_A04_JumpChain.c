/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A17_F23_O_A04_JumpChain.c
 * Implementation Logic: JumpChain
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   J(int ltlp8[], int NinA,   int  V2)  {
   int   V7  = 0,  WZcp8  =  NinA - 1;
   while (V7 <=  WZcp8)  {
  if (ltlp8[V7] !=  V2)  goto  T;
 return V7;
   T:
 if (ltlp8[WZcp8] !=  V2) goto  hOR;
  return  WZcp8;
 hOR:
 V7++; WZcp8--;
 }
 return  -1;
}

int  main(int   argc,  char  *argv[])  {
 if   (argc  <   3) return   1;
  int  V2   = atoi(argv[1]);
   int   yi9   =  argc  -   2;
 int  ltlp8[100];
 for (int jbt = 0;   jbt <   yi9; jbt++) {
  ltlp8[jbt] =  atoi(argv[jbt +  2]);
 }
 int s   =   J(ltlp8,   yi9, V2);
   printf("%d\n", s);
   return 0;
}