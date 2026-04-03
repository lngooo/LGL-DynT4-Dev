/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A13_F21_O_A05_Bitshift.c
 * Implementation Logic: 基于 A05 使用位移代替乘除指令 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   Hi0(int *gB, int YE2)  {
   for(int   J0=YE2>>1;J0>0;J0>>=1){for(int   *E3=gB+J0;E3<gB+YE2;E3++){int D=*E3,*X=E3;while(X>=gB+J0&&*(X-J0)>D){*X=*(X-J0);X-=J0;}*X=D;}}
}

int main(int   argc,   char *argv[])  {
 if (argc  <   2)  return   0;
  int   YE2  =   argc  - 1;
   int  *gB   =  (int  *)malloc(YE2  *  sizeof(int));
   for  (int   aS   = 0; aS   < YE2;   aS++)   gB[aS]  = atoi(argv[aS+1]);
 Hi0(gB, YE2);
   for   (int  aS =   0;   aS   <  YE2;  aS++)   printf("%d%c",  gB[aS],   aS ==   YE2 -   1   ?  '\n'  : ' ');
   free(gB);
   return 0;
}
