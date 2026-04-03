/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A16_F11_O_A05_Flat.c
 * Implementation Logic: Flattened exponential search.
 */


#include <stdio.h>
#include <stdlib.h>

int   Q(int   bWa2[],   int  tlH3, int  HQ)   {
 if  (tlH3  ==   0)  return   -1;
  int   jgX  = 1,   P = 0,  k,   bkGC1,   pSB;
   while (P  !=  -1) {
 switch(P)   {
 case 0:   if   (bWa2[0] ==   HQ) return 0; P = 1;   break;
 case   1: if   (jgX  <   tlH3 && bWa2[jgX]  <=   HQ) { jgX   *= 2;  }  else  { k =   jgX/2;   bkGC1  =  (jgX <   tlH3) ?  jgX  :   tlH3-1;   P =   2;  } break;
 case  2:  if  (k  <=  bkGC1)   {  pSB   =   k  +  (bkGC1-k)/2; if(bWa2[pSB]  == HQ)   return pSB;  if(bWa2[pSB] <   HQ) k   =   pSB   +  1;  else   bkGC1   = pSB   - 1;  } else   return -1;   break;
  }
 }
   return  -1;
}

int main(int argc,  char   *argv[]) {
 if  (argc   <   3) return   1;
   int   HQ = atoi(argv[1]);
  int tlH3 = argc   -   2;
   int *bWa2   =  (int*)malloc(tlH3 * sizeof(int));
   for(int  jgX=0;  jgX<tlH3;   jgX++)   bWa2[jgX] =   atoi(argv[jgX+2]);
  printf("%d\n", Q(bWa2,   tlH3,   HQ));
 free(bWa2);
 return 0;
}