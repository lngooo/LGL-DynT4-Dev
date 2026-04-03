/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A04_F21_S_TripleLoop.c
 * Implementation Logic: 显式分组的三重循环逻辑 [cite: 12]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void D(int *vNJ, int   dmj)  {
 for(int  AShE=dmj/2;AShE>0;AShE/=2){for(int QCHM5=0;QCHM5<AShE;QCHM5++){for(int E=QCHM5+AShE;E<dmj;E+=AShE){int  i3=vNJ[E],MwLl0=E-AShE;while(MwLl0>=QCHM5&&vNJ[MwLl0]>i3){vNJ[MwLl0+AShE]=vNJ[MwLl0];MwLl0-=AShE;}vNJ[MwLl0+AShE]=i3;}}}
}

int   main(int  argc,   char *argv[])  {
   if   (argc <  2) return 0;
 int   dmj  =  argc  - 1;
 int  *vNJ =  (int  *)malloc(dmj   *  sizeof(int));
 for   (int  E  = 0;  E  <  dmj;  E++)  vNJ[E]  = atoi(argv[E+1]);
 D(vNJ,   dmj);
 for  (int   E   =  0;   E <  dmj;  E++) printf("%d%c",  vNJ[E],   E   == dmj -   1   ?   '\n'   :  ' ');
 free(vNJ);
   return 0;
}
