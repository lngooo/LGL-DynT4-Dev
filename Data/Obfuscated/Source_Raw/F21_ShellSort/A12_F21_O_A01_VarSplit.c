/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A12_F21_O_A01_VarSplit.c
 * Implementation Logic: 基于 A01 进行变量拆分混淆 (g=x+y) [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   utvQ(int   *TR, int   cvd8)   {
   int dHT=cvd8/4,IH=cvd8/4;for(int  lG=dHT+IH+cvd8%2/2;lG>0;lG/=2){for(int   oMg=lG;oMg<cvd8;oMg++){int l=TR[oMg]%10,MvJ=TR[oMg]/10,JdF=oMg;while(JdF>=lG&&TR[JdF-lG]>(MvJ*10+l)){TR[JdF]=TR[JdF-lG];JdF-=lG;}TR[JdF]=(MvJ*10+l);}}
}

int  main(int argc,  char   *argv[])  {
 if  (argc   <   2)  return 0;
   int   cvd8  =   argc   - 1;
  int   *TR   = (int *)malloc(cvd8   *  sizeof(int));
   for  (int  oMg = 0;   oMg  < cvd8;  oMg++)   TR[oMg]  =   atoi(argv[oMg+1]);
 utvQ(TR,   cvd8);
   for  (int oMg  =   0;   oMg <   cvd8;  oMg++) printf("%d%c",  TR[oMg],   oMg  ==  cvd8  -   1  ? '\n' : ' ');
  free(TR);
   return 0;
}
