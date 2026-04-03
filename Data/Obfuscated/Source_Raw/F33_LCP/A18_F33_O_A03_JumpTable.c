/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A18_F33_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  e3(char   **bI, int bY, char *SG)   {
   if  (bY   <=   1) {   if(bY==1) strcpy(SG,  bI[0]); return;   }
 char Y[128]={0},  GTCM[128]={0};
  e3(bI, bY/2, Y);   e3(bI   +  bY/2,   bY  -   bY/2,   GTCM);
  int ay   =   0;
fOK4:
 if (Y[ay]   && Y[ay] ==   GTCM[ay]) {  SG[ay]  = Y[ay]; ay++; goto fOK4;   }
   SG[ay]  =   0;
}

int main(int argc,   char   *argv[])  {
  if  (argc   < 2) return  0;
 int   PCCP  =  argc   -   1;
  char  **bI  =   &argv[1];
 char qwXD[128]   =  {0};
  e3(bI,   PCCP,  qwXD);
   printf("%s\n", qwXD);
  return   0;
}