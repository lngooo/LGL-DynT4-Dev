/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A08_F21_S_SedgewickLow.c
 * Implementation Logic: 使用 Sedgewick 序列片段 (4^k+3*2^k+1) 
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  A(int  *Sav,  int VazL)   {
   int   Jm[]={109,41,19,5,1};for(int  i=0;i<5;i++){int EjU6=Jm[i];if(EjU6>=VazL)continue;for(int xsy=EjU6;xsy<VazL;xsy++){int   GC=Sav[xsy],INOu=xsy;while(INOu>=EjU6&&Sav[INOu-EjU6]>GC){Sav[INOu]=Sav[INOu-EjU6];INOu-=EjU6;}Sav[INOu]=GC;}}
}

int  main(int argc, char   *argv[])  {
  if (argc  <   2) return   0;
  int VazL =  argc  -  1;
 int   *Sav =  (int  *)malloc(VazL   *  sizeof(int));
  for   (int  xsy   =   0; xsy   < VazL;  xsy++) Sav[xsy] =   atoi(argv[xsy+1]);
  A(Sav,   VazL);
  for  (int  xsy  =  0;  xsy  < VazL;  xsy++)   printf("%d%c", Sav[xsy],  xsy ==  VazL -  1 ? '\n'   :   ' ');
 free(Sav);
   return  0;
}
