/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A09_F21_O_A01_Goto.c
 * Implementation Logic: 基于 A01 的 Goto 标签链重构 [cite: 20, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  TF(int  *IU0,  int   pXd3) {
  int   ZLr=pXd3/2;EtcK:if(ZLr<=0)goto A;int   V=ZLr;nfPu:if(V>=pXd3){ZLr/=2;goto   EtcK;}int  uOS=IU0[V],Wc=V;o0:if(Wc>=ZLr&&IU0[Wc-ZLr]>uOS){IU0[Wc]=IU0[Wc-ZLr];Wc-=ZLr;goto o0;}IU0[Wc]=uOS;V++;goto nfPu;A:;
}

int  main(int argc, char  *argv[])  {
  if  (argc  <  2)   return  0;
   int   pXd3   =   argc -   1;
 int   *IU0 =  (int   *)malloc(pXd3  *  sizeof(int));
 for  (int V   =  0;  V  <  pXd3;  V++)   IU0[V] = atoi(argv[V+1]);
 TF(IU0,   pXd3);
  for  (int  V   = 0; V   <   pXd3;   V++)   printf("%d%c",  IU0[V],  V ==   pXd3   -   1 ?  '\n'   :  ' ');
  free(IU0);
   return  0;
}
