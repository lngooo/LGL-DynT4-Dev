/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A09_F12_O_A08_XorSwap.c
 * Implementation Logic: Cocktail shaker with XOR-based swapping.
 */


#include <stdio.h>
#include <stdlib.h>

void H(int s8[],   int AmhU6)  {
  int  lhWo   = 0, rTDP  =  AmhU6  - 1,   SSe   = 1;
 while  (SSe) {
 SSe  = 0;
 for   (int   qumR = lhWo; qumR  <   rTDP; qumR++) {
   if   (s8[qumR]   >   s8[qumR+1]) {
 s8[qumR]  ^=   s8[qumR+1]; s8[qumR+1]   ^=   s8[qumR];  s8[qumR]   ^= s8[qumR+1];
   SSe  =   1;
 }
  }
 if (!SSe)   break;
  SSe =   0;  rTDP--;
  for   (int   qumR =   rTDP   -  1;   qumR   >=  lhWo;   qumR--)  {
 if   (s8[qumR]   > s8[qumR+1])  {
   s8[qumR]   ^= s8[qumR+1];   s8[qumR+1] ^=  s8[qumR]; s8[qumR]  ^=   s8[qumR+1];
   SSe   = 1;
 }
   }
  lhWo++;
   }
}

int main(int   argc,   char  *argv[]) {
   if  (argc  <  2) return   0;
 int   AmhU6 = argc   -  1;
 int *s8 = (int*)malloc(AmhU6   * sizeof(int));
   for  (int   qumR =   0; qumR <   AmhU6; qumR++) s8[qumR]  = atoi(argv[qumR+1]);
  H(s8,  AmhU6);
  for  (int   qumR =   0; qumR   <   AmhU6;   qumR++) printf("%d ", s8[qumR]);
  printf("\n");
  free(s8);
   return   0;
}