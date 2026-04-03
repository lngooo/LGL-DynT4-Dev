/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A06_F18_S_MedianOfThreeSelect.c
 * Implementation Logic: MedianOfThreeSelect
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   YoV(int  fit[],   int   Y,  int   KP,   int  bO5)  {
 int  iXB =  Y  +  (KP - Y) /  2;
 if (fit[iXB]   <   fit[Y])   { int xW=fit[iXB];   fit[iXB]=fit[Y];  fit[Y]=xW; }
 if   (fit[KP]   <  fit[Y]) {  int   xW=fit[KP]; fit[KP]=fit[Y]; fit[Y]=xW;  }
  if (fit[KP] < fit[iXB])   {  int xW=fit[KP];  fit[KP]=fit[iXB]; fit[iXB]=xW;   }
  int   PjGq3  = fit[iXB];
 int   kOLB6   =  Y,   eX0  =   KP;
   while   (kOLB6 <=   eX0) {
  while   (fit[kOLB6]   < PjGq3) kOLB6++;
   while (fit[eX0]  > PjGq3) eX0--;
 if   (kOLB6   <=   eX0)  { int xW=fit[kOLB6]; fit[kOLB6]=fit[eX0];   fit[eX0]=xW;   kOLB6++;  eX0--;  }
 }
 if   (bO5   -   1  <=   eX0  - Y) return YoV(fit, Y, eX0,  bO5);
   if   (bO5   -   1  >=  kOLB6 -  Y)  return  YoV(fit,   kOLB6, KP, bO5 - (kOLB6 -   Y));
   return   fit[eX0+1];
}

int main(int  argc, char   *argv[])  {
 if  (argc  < 3) return   0;
  int bO5 = atoi(argv[1]);
 int  tz   =   argc   -  2;
  int   *fit  =   (int   *)malloc(tz  *  sizeof(int));
  for   (int   kOLB6  = 0;   kOLB6  <   tz; kOLB6++)  fit[kOLB6]  = atoi(argv[kOLB6  +   2]);

  // 假设 K  是从  1   开始的  (1st   smallest)
  int n  = YoV(fit,   0,  tz  - 1,   bO5);

 printf("%d\n",  n);
   free(fit);
 return 0;
}