/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A21_F20_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  GeKQ7(int   hzbM[], int   w)  {
 int JU =   -1;
 while (++JU   <  w)  {
 int Xs6   = JU,  vq4 =  JU;
  while (++vq4   < w)  if   (hzbM[vq4]   <   hzbM[Xs6])  Xs6  =  vq4;
 int tgm   = hzbM[JU]; hzbM[JU]  = hzbM[Xs6];   hzbM[Xs6]   =  tgm;
  }
}

int  main(int argc, char   *argv[]) {
   if  (argc   < 2)   return 0;
 int   w  = argc  - 1;
   int  *hzbM  =  (int *)malloc(w *   sizeof(int));
  for  (int   JU =   0; JU  <  w;  JU++) hzbM[JU] = atoi(argv[JU   +  1]);

   GeKQ7(hzbM,  w);

  for   (int   JU   =   0;   JU  <  w;   JU++)  {
   printf("%d%s", hzbM[JU], (JU ==   w -   1   ? "" : " "));
 }
 printf("\n");
 free(hzbM);
  return  0;
}