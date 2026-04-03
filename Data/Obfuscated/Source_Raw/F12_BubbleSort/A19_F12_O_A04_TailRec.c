/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A19_F12_O_A04_TailRec.c
 * Implementation Logic: Bubble sort as tail-recursive single-pass helper.
 */


#include <stdio.h>
#include <stdlib.h>

void   IN4(int   Ki[], int  j2)  {
  if (j2   <= 1) return;
  for (int   t1   =  0;  t1   <   j2  - 1;  t1++)   {
  if   (Ki[t1]  >   Ki[t1+1])  {
  int  BTC   =  Ki[t1];   Ki[t1] =   Ki[t1+1];  Ki[t1+1]   = BTC;
 }
  }
   IN4(Ki, j2 -   1);
}

void paNf(int   Ki[],  int j2) {
 IN4(Ki, j2);
}

int main(int argc,  char   *argv[]) {
 if  (argc <   2)  return   0;
 int j2  =   argc  -   1;
   int   *Ki = (int*)malloc(j2  *   sizeof(int));
  for (int  t1   =   0;   t1   <  j2;   t1++)   Ki[t1]   = atoi(argv[t1+1]);
   paNf(Ki, j2);
   for   (int t1 =   0;   t1 < j2; t1++)  printf("%d ",  Ki[t1]);
  printf("\n");
 free(Ki);
   return   0;
}