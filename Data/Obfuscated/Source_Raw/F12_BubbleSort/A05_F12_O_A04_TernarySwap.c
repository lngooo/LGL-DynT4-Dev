/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A05_F12_O_A04_TernarySwap.c
 * Implementation Logic: Recursive BS with logic hidden in ternary expressions.
 */


#include <stdio.h>
#include <stdlib.h>

void   w(int  veaH[], int   TKK)   {
 if  (TKK   <= 1)  return;
  for   (int Za  =   0; Za  <   TKK   -   1;   Za++)   {
  (veaH[Za] >  veaH[Za+1])   ?  ({int fFV=veaH[Za];   veaH[Za]=veaH[Za+1]; veaH[Za+1]=fFV;   0;})  :   0;
   }
   w(veaH,   TKK   - 1);
}

int  main(int   argc,   char   *argv[])   {
  if   (argc <  2) return  0;
   int  TKK =  argc  - 1;
   int  *veaH  = (int*)malloc(TKK   *   sizeof(int));
 for (int Za = 0;  Za   <  TKK;  Za++)   veaH[Za]   =   atoi(argv[Za+1]);
   w(veaH, TKK);
  for (int  Za =   0; Za   <  TKK; Za++) printf("%d ",  veaH[Za]);
  printf("\n");
  free(veaH);
   return  0;
}