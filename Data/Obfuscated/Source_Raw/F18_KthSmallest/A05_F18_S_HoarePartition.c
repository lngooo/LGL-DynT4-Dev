/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A05_F18_S_HoarePartition.c
 * Implementation Logic: HoarePartition
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   LG1(int   SES[], int  j3,  int   CEQ,  int XM)   {
   if  (j3  ==  CEQ) return  SES[j3];
  int   Ab7 =   SES[j3],  czI7   =  j3   -  1, sO   = CEQ + 1;
 while  (1) {
  do {  czI7++;  }  while   (SES[czI7] <   Ab7);
  do { sO--;  } while   (SES[sO]   > Ab7);
 if   (czI7   >=  sO)  break;
 int  so   = SES[czI7];  SES[czI7] =  SES[sO];   SES[sO] =   so;
  }
  int znOo =   sO;
  if (znOo - j3  >= XM   - 1)   return   LG1(SES,   j3,   znOo,  XM);
 return   LG1(SES,   znOo   +   1,   CEQ,  XM  - (znOo  -   j3   +  1));
}

int main(int   argc, char  *argv[]) {
  if   (argc  <   3)  return   0;
  int  XM  =   atoi(argv[1]);
   int   bw  =   argc   -  2;
  int   *SES   = (int *)malloc(bw  *   sizeof(int));
 for   (int czI7  =   0;  czI7   <   bw;   czI7++) SES[czI7]  =   atoi(argv[czI7 +   2]);

 // 假设 K   是从  1 开始的 (1st smallest)
   int w  =   LG1(SES, 0,  bw  - 1,  XM);

  printf("%d\n",  w);
   free(SES);
 return   0;
}