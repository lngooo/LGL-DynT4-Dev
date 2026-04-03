/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A03_F11_S_Deferred.c
 * Implementation Logic: Binary search that defers equality check to the end.
 */


#include <stdio.h>
#include <stdlib.h>

int  hd(int ELw8[],  int  Wky2, int jdbS2) {
 if   (Wky2   ==  0)  return -1;
   int h  = 0, yYOS   =  Wky2   -  1;
   while  (h  < yYOS) {
  int   MKI = h +  (yYOS   -   h)   /   2;
   if  (ELw8[MKI]   <  jdbS2)   h   =   MKI   + 1;
  else   yYOS =  MKI;
   }
   return   (ELw8[h]  ==   jdbS2)  ? h  :  -1;
}

int main(int  argc,   char   *argv[]) {
  if  (argc  <   3)   return 1;
  int   jdbS2 =  atoi(argv[1]);
  int  Wky2   = argc -   2;
   int  *ELw8  =  (int*)malloc(Wky2 *   sizeof(int));
 for(int aO=0; aO<Wky2;  aO++) ELw8[aO]  = atoi(argv[aO+2]);
  printf("%d\n", hd(ELw8, Wky2,  jdbS2));
   free(ELw8);
   return  0;
}