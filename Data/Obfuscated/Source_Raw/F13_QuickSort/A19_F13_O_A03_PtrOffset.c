/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A19_F13_O_A03_PtrOffset.c
 * Implementation Logic: PtrOffset
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   wsw2(int   nd5[],  int  xnK,   int lJq)   {
  if (xnK >=   lJq) return;
   int EqxD = *(nd5   +  (xnK  +  lJq) / 2), wMpL =   xnK,   rUCk   =   lJq;
  while (wMpL   <= rUCk) {
   while  (*(nd5  +  wMpL) < EqxD)   wMpL++;
 while  (*(nd5 + rUCk)  >  EqxD)  rUCk--;
   if   (wMpL   <= rUCk)  {
 int  nIxC7  = *(nd5   +   wMpL); *(nd5 +   wMpL)   =  *(nd5   + rUCk); *(nd5 + rUCk)   = nIxC7;
 wMpL++;   rUCk--;
 }
  }
   if (xnK <  rUCk)   wsw2(nd5, xnK, rUCk);
 if   (wMpL  <  lJq) wsw2(nd5, wMpL,  lJq);
}

int  main(int   argc, char   *argv[])   {
   if (argc   < 2)   return  0;
  int  O =  argc  -   1;
  int *nd5  = (int  *)malloc(O  *  sizeof(int));
   for   (int   wMpL   = 0; wMpL   < O; wMpL++) nd5[wMpL] =   atoi(argv[wMpL  +  1]);

 wsw2(nd5, 0,   O - 1);

  for   (int   wMpL = 0;  wMpL  <  O;  wMpL++) {
 printf("%d%s", nd5[wMpL],  (wMpL   ==   O   - 1  ?  ""  :   " "));
  }
 printf("\n");
  free(nd5);
 return 0;
}