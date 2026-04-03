/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A21_F22_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void isjH(int   tJn[],   int OVi) {
 int z8 = 0;
  while (++z8 <  OVi)  {
   int  wiH =  tJn[z8], NM4  =  z8;
 while   (--NM4 >=   0 &&   tJn[NM4]  >   wiH)  {
  tJn[NM4+1] =   tJn[NM4];
  }
  tJn[NM4+1] =  wiH;
 }
}

int  main(int argc, char   *argv[]) {
 if (argc   <   2)  return  0;
   int   OVi = argc -  1;
   int *tJn  =   (int  *)malloc(OVi *  sizeof(int));
   for  (int   z8 =   0;   z8  <   OVi;   z8++)  tJn[z8]  =   atoi(argv[z8  + 1]);

 isjH(tJn,  OVi);

  for   (int  z8 = 0;   z8 < OVi;   z8++) {
 printf("%d%s",   tJn[z8],   (z8  ==  OVi  -   1 ?  "" :  " "));
 }
 printf("\n");
 free(tJn);
 return  0;
}