/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A06_F21_S_XorSwapInsertion.c
 * Implementation Logic: 利用组内异或交换模拟插入排序 [cite: 22]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   uizF2(int *VJBd, int  m7)   {
   for(int j=m7/2;j>0;j/=2){for(int  xG=j;xG<m7;xG++){for(int  VDW=xG;VDW>=j&&VJBd[VDW-j]>VJBd[VDW];VDW-=j){VJBd[VDW]^=VJBd[VDW-j];VJBd[VDW-j]^=VJBd[VDW];VJBd[VDW]^=VJBd[VDW-j];}}}
}

int   main(int  argc, char   *argv[])  {
 if  (argc   <   2)   return 0;
 int m7 =  argc -   1;
  int   *VJBd  = (int   *)malloc(m7 *  sizeof(int));
  for   (int xG = 0;   xG  <  m7;   xG++) VJBd[xG] =   atoi(argv[xG+1]);
   uizF2(VJBd,  m7);
  for  (int xG =  0;   xG < m7;   xG++) printf("%d%c",  VJBd[xG],  xG  == m7 - 1   ? '\n'  : ' ');
  free(VJBd);
   return  0;
}
