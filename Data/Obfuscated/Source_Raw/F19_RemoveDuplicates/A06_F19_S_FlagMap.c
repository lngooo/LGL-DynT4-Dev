/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A06_F19_S_FlagMap.c
 * Implementation Logic: FlagMap
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  k6(int  yhOa2[],  int DKJf)  {
  int aTN7[128]  =  {0},  DF4   = 0;
   for (int   AG =  0;   AG <  DKJf;   AG++) {
  if   (aTN7[AG])   continue;
  for (int   yhSS =  AG + 1;  yhSS <   DKJf;   yhSS++)  {
 if (yhOa2[AG] == yhOa2[yhSS])   aTN7[yhSS] =   1;
  }
  }
  for  (int  AG  =  0;   AG <  DKJf; AG++)   {
   if (!aTN7[AG])  yhOa2[DF4++] =   yhOa2[AG];
   }
 return   DF4;
}

int  main(int   argc,  char *argv[])  {
 if   (argc <   2)   return  0;
 int  Mq   =   argc -  1;
   int yhOa2[128];
 for   (int AG  =  0; AG < Mq; AG++)  {
  yhOa2[AG]   =   atoi(argv[AG   +  1]);
  }
  int  HZDq  = k6(yhOa2,  Mq);
 for  (int AG =  0; AG   <  HZDq;   AG++)  {
  printf("%d%s", yhOa2[AG],  (AG ==   HZDq  - 1   ?  ""   :  " "));
  }
  printf("\n");
 return 0;
}