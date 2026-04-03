/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A05_F13_S_MedianOfThree.c
 * Implementation Logic: MedianOfThree
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   pOU2(int   H5[], int  lE,   int   XV) {
 if  (lE   <  XV)   {
  int   E   =   lE  +  (XV  -   lE)  /   2;
   if  (H5[E] < H5[lE])  {  int PyjG2 =   H5[E];   H5[E]  =  H5[lE];  H5[lE]  = PyjG2;   }
   if (H5[XV]  <   H5[lE])   { int   PyjG2 =   H5[XV]; H5[XV]  =  H5[lE];   H5[lE]   = PyjG2; }
  if  (H5[XV] < H5[E])  {   int   PyjG2   =   H5[XV]; H5[XV]  =   H5[E];   H5[E]   = PyjG2; }
  int HseV  =   H5[E];
  int   H  =  lE,  LbY5 =   XV;
 while (H <=   LbY5)   {
  while  (H5[H]  <  HseV) H++;
 while   (H5[LbY5] > HseV) LbY5--;
 if (H   <=   LbY5)  {
   int   PyjG2 = H5[H];  H5[H]  = H5[LbY5]; H5[LbY5] = PyjG2;
 H++; LbY5--;
 }
   }
   if  (lE <  LbY5)   pOU2(H5,   lE,  LbY5);
  if (H   < XV)   pOU2(H5, H, XV);
   }
}

int   main(int   argc,   char *argv[]) {
  if (argc  < 2) return   0;
 int  Est1   =   argc   - 1;
 int *H5   =  (int *)malloc(Est1  *   sizeof(int));
   for   (int   H   =   0;  H   <   Est1;   H++) H5[H]  = atoi(argv[H   +   1]);

  pOU2(H5,  0,   Est1 -   1);

  for  (int  H  = 0; H < Est1;   H++)   {
   printf("%d%s",  H5[H],   (H == Est1  - 1 ?   "" :  " "));
 }
 printf("\n");
   free(H5);
 return  0;
}