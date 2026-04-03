/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A01_F17_S_Reversal.c
 * Logic: Reverse 0..k-1, then k..n-1, then 0..n-1.
 * Input: <k> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>

void  Quw(int  soOA[], int   Zoys,  int k)  {
 while  (Zoys   <  k) {
   int Nd  =  soOA[Zoys];
  soOA[Zoys]   =  soOA[k];
  soOA[k] = Nd;
  Zoys++;   k--;
   }
}

void uZ3(int  soOA[],   int   Ru,   int rXt) {
   if  (Ru ==  0)   return;
  rXt   = rXt % Ru;
  if  (rXt == 0)  return;
 Quw(soOA, 0,   rXt  -   1);
  Quw(soOA, rXt,   Ru -  1);
 Quw(soOA, 0,  Ru   - 1);
}

int main(int  argc,   char *argv[]) {
 if (argc <   3)  return   0;
   int   rXt = atoi(argv[1]);
   int   Ru   =  argc -   2;
 int  *soOA = (int*)malloc(Ru   *  sizeof(int));
 for(int  aV=0; aV<Ru; aV++) soOA[aV] =   atoi(argv[aV+2]);
 uZ3(soOA,   Ru,   rXt);
   for(int   aV=0; aV<Ru;   aV++)  printf("%d ",  soOA[aV]);
  printf("\n");
   free(soOA);
 return 0;
}