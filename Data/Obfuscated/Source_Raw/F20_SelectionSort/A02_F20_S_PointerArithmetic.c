/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A02_F20_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   OtvU6(int Nm1[], int  KZZE) {
 int  *bm1, *nc,  *Y3;
  for   (bm1  = Nm1;  bm1  <   Nm1  +  KZZE - 1;  bm1++)  {
 Y3  =  bm1;
 for   (nc   =   bm1 +  1;   nc <  Nm1  +   KZZE;   nc++) {
 if (*nc  < *Y3)   Y3   = nc;
   }
  int  DHbf   =   *Y3;
   *Y3 = *bm1;
  *bm1   =   DHbf;
  }
}

int main(int   argc, char   *argv[])   {
  if   (argc   <  2)  return  0;
  int  KZZE   =  argc   -   1;
   int   *Nm1 =   (int  *)malloc(KZZE  *  sizeof(int));
 for (int  TU5  = 0;   TU5  < KZZE;  TU5++)   Nm1[TU5]   =  atoi(argv[TU5  +  1]);

  OtvU6(Nm1, KZZE);

   for (int TU5 =   0;  TU5   <  KZZE;  TU5++)   {
   printf("%d%s",   Nm1[TU5],   (TU5 == KZZE - 1 ?  ""   : " "));
  }
 printf("\n");
  free(Nm1);
   return   0;
}