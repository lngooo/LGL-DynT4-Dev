/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A05_F22_S_ForLoopShift.c
 * Implementation Logic: ForLoopShift
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  dEz3(int liq[], int  ZjoM) {
 for  (int MPoU =   1;  MPoU  <  ZjoM;   MPoU++) {
  int xWld8  =   liq[MPoU], ay;
  for (ay   = MPoU  -  1;   ay   >=   0   &&  liq[ay]   >  xWld8;  ay--) {
   liq[ay+1]   =   liq[ay];
 }
   liq[ay+1]  = xWld8;
   }
}

int main(int argc,  char  *argv[]) {
   if (argc < 2) return   0;
 int ZjoM   =   argc - 1;
   int  *liq =   (int *)malloc(ZjoM *  sizeof(int));
   for (int  MPoU =  0;   MPoU <   ZjoM;   MPoU++)  liq[MPoU] =   atoi(argv[MPoU   + 1]);

  dEz3(liq,  ZjoM);

 for (int  MPoU  = 0; MPoU   < ZjoM;  MPoU++)  {
  printf("%d%s",  liq[MPoU],   (MPoU ==   ZjoM   -   1   ? ""   :   " "));
 }
   printf("\n");
   free(liq);
  return 0;
}