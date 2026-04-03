/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A12_F12_S_QsortWrapper.c
 * Implementation Logic: Using qsort with bubble-style comparison (Seed 6).
 */


#include <stdio.h>
#include <stdlib.h>

int   lXJa(const void   *z,   const  void  *Vhg)   {
 return (*(int*)z  -  *(int*)Vhg);
}

void  eWoi(int MjU[],   int  nRHJ7)  {
   qsort(MjU,  nRHJ7,  sizeof(int), lXJa);
}

int main(int  argc, char *argv[])  {
 if   (argc <   2)   return  0;
 int  nRHJ7   = argc -  1;
  int   *MjU   =   (int*)malloc(nRHJ7 * sizeof(int));
 for (int  Hi   = 0;   Hi < nRHJ7;  Hi++) MjU[Hi]  =  atoi(argv[Hi+1]);
   eWoi(MjU, nRHJ7);
 for  (int Hi   =  0; Hi   <   nRHJ7; Hi++) printf("%d ",  MjU[Hi]);
   printf("\n");
   free(MjU);
   return 0;
}