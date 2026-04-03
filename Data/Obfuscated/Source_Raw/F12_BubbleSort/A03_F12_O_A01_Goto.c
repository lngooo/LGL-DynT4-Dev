/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A03_F12_O_A01_Goto.c
 * Implementation Logic: Iterative bubble sort using goto labels.
 */


#include <stdio.h>
#include <stdlib.h>

void f(int   WZ8[],   int JGQe) {
   int  NmpH = 0,  ijRC;
oyM:
  if   (NmpH   >= JGQe -  1)   goto AT;
  ijRC   =   0;
cJw:
   if (ijRC  >=   JGQe -  NmpH -  1) { NmpH++;   goto   oyM;   }
 if   (WZ8[ijRC] >   WZ8[ijRC  +  1])  {
   int  U   = WZ8[ijRC];  WZ8[ijRC]  = WZ8[ijRC+1];  WZ8[ijRC+1]  =  U;
   }
  ijRC++;
  goto  cJw;
AT:
  return;
}

int main(int   argc, char   *argv[])  {
   if (argc  <   2)   return 0;
  int   JGQe   = argc -   1;
   int   *WZ8   =   (int*)malloc(JGQe  * sizeof(int));
   for   (int NmpH =   0;  NmpH   <   JGQe;   NmpH++)  WZ8[NmpH]   =   atoi(argv[NmpH+1]);
  f(WZ8,   JGQe);
   for   (int  NmpH   =   0;   NmpH <   JGQe;   NmpH++) printf("%d ",  WZ8[NmpH]);
  printf("\n");
  free(WZ8);
   return   0;
}