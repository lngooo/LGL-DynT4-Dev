/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A16_F20_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  P(int   H[],  int  Zy)  {
  for   (int  oMv  =  0;  oMv   <  Zy;  oMv++)   {
  if ((oMv   * oMv   +   1)  >  0)  {
 int G  = oMv;
  for   (int  JPYL4   = oMv   + 1; JPYL4 < Zy;   JPYL4++)  if  (H[JPYL4]   < H[G]) G  =   JPYL4;
  int   oa2 =  H[oMv]; H[oMv]  =  H[G]; H[G]  = oa2;
 }
  }
}

int main(int  argc, char   *argv[])   {
 if  (argc   <   2) return   0;
  int Zy   = argc -   1;
   int  *H =  (int *)malloc(Zy  * sizeof(int));
 for  (int  oMv =  0;   oMv < Zy;  oMv++)  H[oMv] =  atoi(argv[oMv   + 1]);

  P(H, Zy);

 for  (int   oMv   =   0;   oMv  <  Zy;   oMv++)  {
   printf("%d%s", H[oMv], (oMv   ==   Zy  -  1  ? ""   :   " "));
  }
   printf("\n");
 free(H);
   return  0;
}