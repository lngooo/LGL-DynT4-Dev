/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A05_F10_S_BitPattern.c
 * Implementation Logic: BitPattern
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int P2(int  vB) {
 int DG  =  0;
  if  (vB >= 1   <<   16)  {  vB   >>=   16; DG  += 16;  }
   if   (vB  >=  1 <<  8) { vB >>=   8;  DG   +=  8; }
 if   (vB >=   1  <<  4)   { vB  >>=   4;  DG +=   4;   }
  if (vB  >=  1 <<   2)  {   vB >>=  2;  DG += 2;   }
 if   (vB  >=  1  <<  1)  { DG  +=   1;   }
  return   DG;
}

int main(int  argc,   char *argv[]) {
   if (argc   <   2) return  0;
  int vB  =  atoi(argv[1]);
  if (vB   <=   0)  return   0;  
  int  JUY   =  P2(vB);
  printf("%d\n",   JUY);
  return 0;
}