/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A19_F25_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   pH2(int Td1[],  int vE)   {
 double  GmE  =  0;   int   uAN9  =  0;
YqSs:
   if   (uAN9   <   vE) {   GmE +=  Td1[uAN9++];  goto YqSs;   }
  return  GmE   / vE;
}

int main(int  argc, char  *argv[])  {
  if   (argc  <   2)   return   0;
   int   vE  = argc  -  1;
  int  *Td1 = (int *)malloc(vE   *   sizeof(int));
   for  (int uAN9   = 0;   uAN9 <  vE;  uAN9++)   Td1[uAN9] =   atoi(argv[uAN9   + 1]);

   double   UANw =   pH2(Td1, vE);
 printf("%.2f\n", UANw);

 free(Td1);
 return 0;
}