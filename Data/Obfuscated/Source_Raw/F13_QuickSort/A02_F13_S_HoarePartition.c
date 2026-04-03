/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A02_F13_S_HoarePartition.c
 * Implementation Logic: HoarePartition
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  MWEu(int   lQh[],  int  UGw, int   cEE0)  {
  if  (UGw   <   cEE0)   {
  int   c =   lQh[UGw];
   int yEB5   = UGw - 1, ee  =   cEE0   +  1;
   while   (1)   {
   do   {   yEB5++; } while  (lQh[yEB5]   <   c);
 do   {   ee--;  } while  (lQh[ee] >  c);
   if   (yEB5  >=  ee)  break;
 int  Vip8 =  lQh[yEB5];  lQh[yEB5] =   lQh[ee];  lQh[ee]   = Vip8;
 }
 MWEu(lQh,   UGw, ee);
   MWEu(lQh, ee +   1,   cEE0);
  }
}

int  main(int   argc, char *argv[])   {
 if   (argc  <   2) return  0;
  int   GWR = argc   -   1;
   int   *lQh   =   (int *)malloc(GWR *  sizeof(int));
  for   (int yEB5  =  0; yEB5   <  GWR;  yEB5++)   lQh[yEB5] = atoi(argv[yEB5  + 1]);

   MWEu(lQh,   0,  GWR   -   1);

   for (int   yEB5  =   0; yEB5   <  GWR; yEB5++) {
   printf("%d%s",  lQh[yEB5], (yEB5   ==   GWR - 1   ? ""   : " "));
 }
 printf("\n");
   free(lQh);
 return   0;
}