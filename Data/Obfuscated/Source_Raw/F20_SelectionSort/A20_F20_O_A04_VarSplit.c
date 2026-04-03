/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A20_F20_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void aKzt(int N3[], int s)  {
   int   VqbE  =  0,  h =   s - 1;
   while   (VqbE <   h)   {
 int  J =   VqbE,  NBeU   = VqbE;
 for   (int  EjX   =  VqbE;  EjX  <=   h;   EjX++)  {
 if (N3[EjX]   < N3[J])   J = EjX;
   if   (N3[EjX]  >  N3[NBeU])  NBeU =   EjX;
 }
   int   m = N3[VqbE]; N3[VqbE] =  N3[J];  N3[J]   =   m;
  if  (NBeU  == VqbE) NBeU = J;
   int A = N3[h]; N3[h]  =   N3[NBeU]; N3[NBeU]  = A;
  VqbE++; h--;
   }
}

int main(int argc,  char  *argv[])   {
   if   (argc < 2)   return  0;
   int s =  argc - 1;
  int *N3  =  (int *)malloc(s  * sizeof(int));
  for (int   nOk   = 0; nOk   <  s; nOk++) N3[nOk] = atoi(argv[nOk +  1]);

   aKzt(N3,   s);

 for  (int nOk =  0;   nOk < s; nOk++)   {
   printf("%d%s", N3[nOk], (nOk ==   s  - 1 ? ""   :   " "));
   }
 printf("\n");
   free(N3);
  return 0;
}