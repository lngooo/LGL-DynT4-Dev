/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A06_F22_S_SwapBased.c
 * Implementation Logic: SwapBased
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Hx3(int  CQU[], int Lx) {
   for   (int   OeV = 1; OeV  < Lx;   OeV++)  {
 for   (int  r   =  OeV;   r  >  0   &&  CQU[r-1]  >  CQU[r];   r--)   {
  int rzD2   =   CQU[r]; CQU[r]  =   CQU[r-1]; CQU[r-1]   =  rzD2;
   }
  }
}

int  main(int argc,   char   *argv[])  {
   if (argc   < 2)  return   0;
 int   Lx =  argc -   1;
   int  *CQU   =   (int   *)malloc(Lx  *   sizeof(int));
 for (int   OeV   = 0;  OeV  <   Lx;  OeV++) CQU[OeV]   =  atoi(argv[OeV + 1]);

  Hx3(CQU,   Lx);

  for  (int  OeV   =   0; OeV   <   Lx;  OeV++) {
   printf("%d%s",  CQU[OeV],   (OeV  ==  Lx  - 1 ? ""  :  " "));
 }
  printf("\n");
  free(CQU);
 return   0;
}