/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A09_F22_O_A06_MathIdent.c
 * Implementation Logic: MathIdent
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   Dcjm(int  R[], int   ax) {
   for (int   EY   = 1;   EY   <   ax;  EY++)  {
  for (int  tR =   EY;  tR > 0; tR--)   {
   double   Xwfe  = (double)R[tR-1]  -  (double)R[tR];
   if  (Xwfe   >  0.0)  {
 R[tR]   ^=  R[tR-1];  R[tR-1] ^=   R[tR];   R[tR] ^=   R[tR-1];
 }  else break;
   }
   }
}

int main(int   argc, char *argv[])  {
   if   (argc <  2) return   0;
   int   ax   = argc  -  1;
  int  *R  = (int   *)malloc(ax   *   sizeof(int));
  for (int EY  = 0;  EY <  ax; EY++)  R[EY] =   atoi(argv[EY +   1]);

   Dcjm(R,   ax);

   for (int  EY  = 0;   EY <   ax;   EY++) {
   printf("%d%s",  R[EY],   (EY   == ax  -  1   ?  ""   : " "));
 }
 printf("\n");
 free(R);
  return  0;
}