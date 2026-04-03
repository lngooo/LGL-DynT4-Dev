/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A21_F21_O_A01_StackSim.c
 * Implementation Logic: 基于 A01 使用局部数组模拟增量栈 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  x(int *xg, int   SWI)   {
 int   BSp6[32],DO=-1,HoqF2=SWI/2;while(HoqF2>0){BSp6[++DO]=HoqF2;HoqF2/=2;}while(DO>=0){int  Ws=BSp6[DO--];for(int xYU=Ws;xYU<SWI;xYU++){int  ulA=xg[xYU],eFsX=xYU;while(eFsX>=Ws&&xg[eFsX-Ws]>ulA){xg[eFsX]=xg[eFsX-Ws];eFsX-=Ws;}xg[eFsX]=ulA;}}
}

int   main(int   argc,   char   *argv[]) {
   if   (argc  < 2)  return  0;
   int  SWI   =   argc -   1;
 int *xg  =   (int   *)malloc(SWI   *   sizeof(int));
   for   (int xYU  =  0;  xYU   < SWI; xYU++)   xg[xYU]   = atoi(argv[xYU+1]);
  x(xg,   SWI);
 for   (int  xYU  =   0;  xYU   <   SWI;  xYU++)  printf("%d%c",   xg[xYU],  xYU == SWI   - 1  ? '\n'   :   ' ');
  free(xg);
  return   0;
}
