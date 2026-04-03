/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A01_F21_S_ShellGap.c
 * Implementation Logic: 使用经典 N/2 希尔增量序列 [cite: 12]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   v9(int   *S,   int   x)   {
  for(int uU=x/2;uU>0;uU/=2){for(int Poe=uU;Poe<x;Poe++){int IJ=S[Poe],ZMJ=Poe;while(ZMJ>=uU&&S[ZMJ-uU]>IJ){S[ZMJ]=S[ZMJ-uU];ZMJ-=uU;}S[ZMJ]=IJ;}}
}

int main(int  argc,   char  *argv[]) {
 if (argc  <   2)  return 0;
  int  x  =  argc -  1;
  int *S   =   (int   *)malloc(x  * sizeof(int));
   for   (int  Poe  =  0; Poe <  x;  Poe++)   S[Poe]  =  atoi(argv[Poe+1]);
 v9(S,   x);
 for (int Poe   =   0; Poe  <   x;   Poe++)  printf("%d%c",  S[Poe],  Poe ==  x  -  1 ?  '\n'   : ' ');
   free(S);
  return 0;
}
