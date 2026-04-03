/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A17_F21_O_A03_LogicInvert.c
 * Implementation Logic: 基于 A03 反转循环判断逻辑 [cite: 17, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  a(int  *Y,  int  ZUYV5)   {
   int   Wz=(int)(log10(ZUYV5+1)/log10(2));while(Wz>0){int   faNW=(1<<Wz)-1;for(int   oZRf=faNW;oZRf<ZUYV5;oZRf++){int  sF=Y[oZRf],jyY=oZRf;while(!(jyY<faNW   ||  Y[jyY-faNW]<=sF)){Y[jyY]=Y[jyY-faNW];jyY-=faNW;}Y[jyY]=sF;}Wz--;}
}

int main(int   argc,   char  *argv[]) {
  if   (argc  < 2) return   0;
 int   ZUYV5   = argc   -  1;
   int *Y =  (int   *)malloc(ZUYV5   * sizeof(int));
   for  (int   oZRf   = 0;   oZRf  <   ZUYV5; oZRf++)  Y[oZRf]   = atoi(argv[oZRf+1]);
   a(Y,   ZUYV5);
  for   (int   oZRf   =   0; oZRf < ZUYV5; oZRf++)   printf("%d%c",  Y[oZRf],  oZRf  == ZUYV5  -   1   ?  '\n' :   ' ');
 free(Y);
  return   0;
}
