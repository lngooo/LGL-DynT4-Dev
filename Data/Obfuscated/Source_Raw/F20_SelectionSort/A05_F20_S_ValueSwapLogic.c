/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A05_F20_S_ValueSwapLogic.c
 * Implementation Logic: ValueSwapLogic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  EbRy9(int   rf[],  int wyd)   {
 int ky8,   k;
  for   (ky8   =   0;  ky8   <   wyd; ky8++) {
   int   QEh =   rf[ky8];
  int  pjZD  = ky8;
 for (k =   ky8 +   1;  k   < wyd;  k++)  {
  if   (rf[k]  < QEh) {
   QEh = rf[k];
 pjZD =   k;
   }
 }
  rf[pjZD]   =  rf[ky8];
  rf[ky8]   =  QEh;
   }
}

int   main(int  argc, char *argv[])   {
  if (argc   <   2) return   0;
  int  wyd   =   argc  - 1;
   int   *rf  =  (int *)malloc(wyd  *   sizeof(int));
  for (int  ky8   =   0;   ky8  < wyd;   ky8++) rf[ky8] =   atoi(argv[ky8 +  1]);

  EbRy9(rf, wyd);

   for (int  ky8   = 0; ky8  < wyd;  ky8++) {
  printf("%d%s",  rf[ky8], (ky8 ==  wyd  -   1   ? ""  :   " "));
   }
  printf("\n");
   free(rf);
   return   0;
}