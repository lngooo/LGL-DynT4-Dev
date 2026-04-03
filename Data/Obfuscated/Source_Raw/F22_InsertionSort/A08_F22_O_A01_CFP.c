/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A08_F22_O_A01_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   f(int   e[],  int  Sy3)   {
   int Gnb6  = 0,   anK   =  1,   sgK, Ujah;
   while   (Gnb6  !=   3)   {
 switch  (Gnb6) {
 case  0: Gnb6 =   (anK <   Sy3)   ?   1   :   3; break;
 case   1: Ujah   =  e[anK]; sgK =   anK   -   1;   Gnb6 = 2;   break;
   case  2:
   while (sgK   >= 0   &&   e[sgK]   > Ujah)   {   e[sgK+1]  =  e[sgK];   sgK--; }
  e[sgK+1]   =   Ujah;  anK++;   Gnb6 =  0;  break;
   }
 }
}

int  main(int   argc,  char *argv[]) {
  if  (argc  <   2) return  0;
 int   Sy3   =  argc   -   1;
  int  *e  =   (int *)malloc(Sy3 * sizeof(int));
  for (int anK   =   0;   anK <   Sy3;  anK++) e[anK]  = atoi(argv[anK +   1]);

  f(e,  Sy3);

  for  (int   anK   = 0;   anK  <  Sy3;  anK++)   {
 printf("%d%s", e[anK],  (anK ==   Sy3   - 1  ? ""   :   " "));
 }
   printf("\n");
  free(e);
 return   0;
}