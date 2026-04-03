/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A02_F21_S_KnuthGap.c
 * Implementation Logic: 使用 Knuth 增量序列 (3h+1) 
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void nc(int  *KIw3, int  apzO2)   {
 int  iqV=1;while(iqV<apzO2/3)iqV=3*iqV+1;while(iqV>=1){for(int   j=iqV;j<apzO2;j++){int  vZCV=KIw3[j],z0=j;while(z0>=iqV&&KIw3[z0-iqV]>vZCV){KIw3[z0]=KIw3[z0-iqV];z0-=iqV;}KIw3[z0]=vZCV;}iqV/=3;}
}

int   main(int argc,   char *argv[])  {
 if   (argc < 2)   return   0;
  int   apzO2   = argc -   1;
 int   *KIw3  =   (int   *)malloc(apzO2  *  sizeof(int));
 for (int j  =  0;  j  <   apzO2;  j++)  KIw3[j]  =  atoi(argv[j+1]);
  nc(KIw3,   apzO2);
  for  (int j  = 0;   j  <  apzO2; j++)   printf("%d%c",   KIw3[j], j   ==  apzO2 -   1   ?   '\n' :  ' ');
  free(KIw3);
 return   0;
}
