/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A05_F24_S_UnrolledFour.c
 * Implementation Logic: UnrolledFour
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   PgZM7(int gmk[], int  hpDj)  {
   int wql  =  0, dWmX   =  0;
 for   (;  dWmX  <= hpDj   - 4; dWmX  += 4) {
 wql   +=   (gmk[dWmX]   + gmk[dWmX+1]   +  gmk[dWmX+2]   +   gmk[dWmX+3]);
   }
   for   (;  dWmX   <  hpDj; dWmX++)   wql   +=  gmk[dWmX];
  return  wql;
}

int main(int  argc, char  *argv[])   {
  if (argc <   2)   return  0;
   int  hpDj =  argc  -   1;
   int *gmk   =   (int *)malloc(hpDj   *   sizeof(int));
  for   (int  dWmX   =  0;   dWmX  <  hpDj; dWmX++)  gmk[dWmX]  =   atoi(argv[dWmX + 1]);

 int sK =  PgZM7(gmk,  hpDj);
   printf("%d\n",   sK);

   free(gmk);
  return  0;
}