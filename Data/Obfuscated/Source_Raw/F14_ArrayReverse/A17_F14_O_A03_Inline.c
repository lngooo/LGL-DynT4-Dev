/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A17_F14_O_A03_Inline.c
 * Implementation Logic: Midpoint swap with inline arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

void  x9(int  ex[], int   Ok)  {
  for  (int   KW  = 0;  KW <  (Ok   >> 1);   KW++) {
   ex[KW]  += ex[Ok - 1 - KW];
 ex[Ok - 1   -   KW]   =  ex[KW]   -  ex[Ok -  1  -   KW];
 ex[KW] = ex[KW]  -  ex[Ok   -   1  - KW];
   }
}

int main(int   argc,   char   *argv[])  {
  if   (argc   <   2) return   0;
 int  Ok =  argc   -   1;
  int   *ex  =  (int*)malloc(Ok   * sizeof(int));
 for(int   KW=0;  KW<Ok;  KW++)  ex[KW]   =   atoi(argv[KW+1]);
 x9(ex, Ok);
 for(int KW=0;  KW<Ok;   KW++)  printf("%d ", ex[KW]);
   printf("\n");
 free(ex);
  return 0;
}