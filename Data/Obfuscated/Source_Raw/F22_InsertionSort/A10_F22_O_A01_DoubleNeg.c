/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A10_F22_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  wtYZ(int jzH1[],  int QsW)  {
   int   Gc  =  1;
 while   (!!(Gc <  QsW)) {
   int bkEl = jzH1[Gc],  wsuX   = Gc   - 1;
 while  (!!(wsuX   >= 0) && !!(jzH1[wsuX] > bkEl))   {
 jzH1[wsuX+1] =   jzH1[wsuX];
 wsuX--;
 }
  jzH1[wsuX+1] =  bkEl;
 Gc++;
   }
}

int   main(int   argc, char   *argv[])  {
  if  (argc   <   2)   return  0;
 int  QsW  = argc   - 1;
  int  *jzH1  =  (int  *)malloc(QsW   * sizeof(int));
  for (int   Gc  =   0;   Gc   <  QsW;   Gc++) jzH1[Gc]  =   atoi(argv[Gc + 1]);

   wtYZ(jzH1, QsW);

  for   (int  Gc =  0; Gc <  QsW;  Gc++)   {
 printf("%d%s", jzH1[Gc],   (Gc  == QsW   - 1   ?   ""  :  " "));
  }
   printf("\n");
  free(jzH1);
   return 0;
}