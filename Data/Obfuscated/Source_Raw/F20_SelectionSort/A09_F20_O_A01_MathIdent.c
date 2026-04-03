/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A09_F20_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void UtDS5(int o[],   int   H)  {
  for  (int  cy8  = 0;   cy8   < H;   cy8++)  {
 int  i  = cy8;
  for (int   tZa =   cy8  + 1;  tZa <  H;  tZa++) {
 double q  =   (double)o[tZa] -   (double)o[i];
  if (q  <  -0.000001) i = tZa;
  }
 if  (abs(i  - cy8) >  0)   {
   o[cy8]  ^=   o[i];  o[i] ^=   o[cy8];  o[cy8] ^= o[i];
   }
   }
}

int   main(int argc,   char   *argv[])  {
 if   (argc <  2)   return 0;
  int H = argc   - 1;
  int  *o   = (int  *)malloc(H   *  sizeof(int));
 for  (int  cy8   =   0; cy8 < H;  cy8++)  o[cy8]   =   atoi(argv[cy8 +  1]);

   UtDS5(o,   H);

   for  (int  cy8 =   0;  cy8   < H; cy8++)   {
 printf("%d%s",   o[cy8],  (cy8 == H   - 1  ? ""  :  " "));
 }
  printf("\n");
 free(o);
  return 0;
}