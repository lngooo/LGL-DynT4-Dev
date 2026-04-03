/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A13_F33_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  YKb(char **Uh,   int e1,   char   *PvS6) {
   int  DLzJ8  =   0; while(Uh[0][DLzJ8])  DLzJ8++;
  for(int  UOxt=0;   UOxt<DLzJ8;   UOxt++) {
   int   SywW =  1;
  for(int EhU5=0;  EhU5<1; EhU5++)   {
   for(int  f=1; f<e1; f++)  if(Uh[f][UOxt]  !=   Uh[0][UOxt]) SywW  =  0;
   }
  if(SywW)   PvS6[UOxt] =   Uh[0][UOxt]; else   {  PvS6[UOxt]   = 0;  return;  }
 }
   PvS6[DLzJ8] =  0;
}

int   main(int  argc,  char *argv[])  {
 if (argc   <   2)  return   0;
  int   P   = argc -   1;
  char  **Uh =  &argv[1];
  char  Z[128]  =   {0};
   YKb(Uh, P,  Z);
  printf("%s\n",   Z);
 return 0;
}