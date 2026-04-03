/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A11_F12_O_A10_Pointer.c
 * Implementation Logic: BS with pointer arithmetic and indirect swap.
 */


#include <stdio.h>
#include <stdlib.h>

void   IVMW(int  *nhJ,   int   *B)  {
  int M  =   *nhJ;  *nhJ  =  *B;   *B  =   M;
}

void   HL(int   I[],  int  nkrm4)  {
  for  (int   Yjtc   =   0;  Yjtc   <   nkrm4;  Yjtc++) {
  int *mX  =  I;
   for  (int  Q1  =  0;   Q1   <   nkrm4  - Yjtc  - 1;  Q1++) {
 if (*mX  >  *(mX  + 1))   IVMW(mX,   mX +   1);
  mX++;
   }
  }
}

int   main(int argc,  char *argv[])  {
   if (argc  <  2)   return  0;
  int  nkrm4  = argc - 1;
 int  *I  = (int*)malloc(nkrm4 *  sizeof(int));
   for   (int Yjtc  = 0;  Yjtc <  nkrm4; Yjtc++)   I[Yjtc]  =   atoi(argv[Yjtc+1]);
   HL(I,   nkrm4);
 for (int Yjtc  = 0;  Yjtc  <  nkrm4; Yjtc++)   printf("%d ", I[Yjtc]);
  printf("\n");
   free(I);
  return 0;
}