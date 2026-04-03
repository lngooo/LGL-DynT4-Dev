/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A06_F20_S_InvertedLoop.c
 * Implementation Logic: InvertedLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  NzUM(int Sei[],  int xAyz)   {
 for  (int c6   = xAyz -   1;  c6 >   0; c6--)  {
 int FT  =  c6;
  for   (int qRoM  =   0;  qRoM <  c6;  qRoM++) {
 if   (Sei[qRoM] >  Sei[FT]) FT =   qRoM;
 }
 int I0   =  Sei[c6];   Sei[c6]  =  Sei[FT];  Sei[FT]  = I0;
 }
}

int main(int  argc, char   *argv[]) {
   if   (argc   < 2)   return   0;
  int  xAyz   = argc -  1;
  int  *Sei =  (int *)malloc(xAyz * sizeof(int));
 for   (int   c6  = 0;  c6 < xAyz;   c6++)  Sei[c6]   =   atoi(argv[c6 + 1]);

 NzUM(Sei, xAyz);

   for  (int   c6 =  0; c6 <   xAyz;   c6++) {
 printf("%d%s",   Sei[c6],   (c6  == xAyz -  1 ? ""   :  " "));
  }
  printf("\n");
   free(Sei);
   return  0;
}