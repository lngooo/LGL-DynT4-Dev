/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A01_F12_S_StandardIterative.c
 * Implementation Logic: Classic nested loop bubble sort (Seed 1).
 */


#include <stdio.h>
#include <stdlib.h>

void   Zf(int sN[], int  ZT)  {
  for  (int m  = 0;   m <  ZT  -   1; m++) {
   for  (int  UrZc8 =   0;  UrZc8  < ZT  -   m  -   1; UrZc8++)   {
 if   (sN[UrZc8]  >   sN[UrZc8   +   1])   {
   int u   =   sN[UrZc8];
   sN[UrZc8] =  sN[UrZc8  +   1];
 sN[UrZc8 +  1] =  u;
  }
  }
   }
}

int main(int argc,  char   *argv[]) {
  if   (argc  <  2)   return  1;
   int   ZT   =   argc -   1;
   int  *sN   =   (int*)malloc(ZT   *  sizeof(int));
  for   (int  m   =  0;   m <  ZT;  m++)   sN[m]  =  atoi(argv[m   + 1]);
 Zf(sN, ZT);
   for (int   m   =   0; m <   ZT;  m++)  printf("%d ", sN[m]);
   printf("\n");
  free(sN);
   return 0;
}