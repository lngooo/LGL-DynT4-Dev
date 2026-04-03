/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A01_F13_S_LomutoPartition.c
 * Implementation Logic: LomutoPartition
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  ThWN2(int  F[], int  WH0,  int   zyu)   {
   if   (WH0 <   zyu)  {
   int  tlw3   =   F[zyu];
  int   qz2  = WH0 -   1;
   for  (int rsf   =  WH0; rsf   <  zyu; rsf++)  {
 if   (F[rsf]  <  tlw3)  {
   qz2++;
 int  a2 = F[qz2];  F[qz2] =   F[rsf];   F[rsf] =  a2;
  }
   }
 int  a2  =  F[qz2  +  1];  F[qz2 +  1]   = F[zyu];  F[zyu] =  a2;
  int   XW7   =   qz2   +  1;
 ThWN2(F,  WH0, XW7  -   1);
  ThWN2(F,   XW7   +  1, zyu);
  }
}

int  main(int   argc, char *argv[])  {
 if  (argc   <   2) return 0;
 int WH   = argc  - 1;
 int   *F = (int   *)malloc(WH   *   sizeof(int));
 for  (int qz2   =  0;   qz2   < WH;   qz2++) F[qz2]  = atoi(argv[qz2  +   1]);

  ThWN2(F, 0, WH  -   1);

  for (int  qz2   = 0;  qz2 < WH;  qz2++)   {
  printf("%d%s",  F[qz2],  (qz2   == WH  -   1 ?  ""   : " "));
 }
   printf("\n");
   free(F);
 return  0;
}