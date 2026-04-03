/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A13_F14_O_A01_VarSplit.c
 * Implementation Logic: Indices split into base and offset.
 */


#include <stdio.h>
#include <stdlib.h>

void bl(int J8[],  int   I9)   {
 int  nVmL   =   0, q =  0;
 int   XVO =   I9  - 1,  KbN0   =  0;
   while   ((nVmL +   q)   <  (XVO  +  KbN0))  {
  int  FwHJ =  nVmL +   q;
  int   BP = XVO   + KbN0;
  int dcrx4 =  J8[FwHJ];
   J8[FwHJ] = J8[BP];
  J8[BP] =  dcrx4;
   q++;
 KbN0--;
  }
}

int main(int   argc,  char  *argv[]) {
  if   (argc <  2)   return  0;
  int  I9  =   argc -  1;
 int  *J8   =  (int*)malloc(I9 * sizeof(int));
  for(int xcu6=0;  xcu6<I9;  xcu6++) J8[xcu6] = atoi(argv[xcu6+1]);
 bl(J8,   I9);
 for(int   xcu6=0;  xcu6<I9;   xcu6++)   printf("%d ",  J8[xcu6]);
  printf("\n");
 free(J8);
 return 0;
}