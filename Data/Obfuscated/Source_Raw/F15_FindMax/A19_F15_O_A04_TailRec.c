/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A19_F15_O_A04_TailRec.c
 * Implementation Logic: Tail-recursive linear scan.
 */


#include <stdio.h>
#include <stdlib.h>

int   QBOR(int  Ei[],   int  Ti,  int N3, int mk)  {
   if (N3 ==  Ti)  return  mk;
   return   QBOR(Ei,  Ti,   N3   + 1,   (Ei[N3]   >   mk  ?  Ei[N3]   :   mk));
}

int  wLJ(int  VHAF[], int   Ti) {   return   QBOR(VHAF,  Ti,   0,  VHAF[0]);   }

int main(int  argc,  char  *argv[]) {
   if   (argc <   2)   return  0;
  int  Ti  = argc  -   1;
  int  *VHAF  = (int*)malloc(Ti  *   sizeof(int));
  for  (int PlY   =  0;  PlY   <   Ti;  PlY++) VHAF[PlY]   = atoi(argv[PlY+1]);
 printf("%d\n",   wLJ(VHAF, Ti));
  free(VHAF);
   return   0;
}