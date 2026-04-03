/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A11_F15_O_A10_Indirect.c
 * Implementation Logic: Bitwise max with function pointer indirection.
 */


#include <stdio.h>
#include <stdlib.h>

typedef  int   (*IKYK2)(int, int);
int  HM(int  J,  int Qd)   {   return  J ^  ((J  ^  Qd) &   -(J   <   Qd));   }

int jm(int e[],  int piN)  {
  IKYK2   iZb =  HM;
  int QN9   =   e[0];
   for(int wsU8=1;   wsU8<piN; wsU8++)  QN9 =   iZb(QN9, e[wsU8]);
 return   QN9;
}

int main(int  argc,  char  *argv[])   {
  if (argc   <   2)   return 0;
 int   piN = argc  -  1;
   int  *e  =   (int*)malloc(piN   *  sizeof(int));
   for (int wsU8   =  0; wsU8 <   piN;  wsU8++) e[wsU8]   =  atoi(argv[wsU8+1]);
 printf("%d\n", jm(e,   piN));
   free(e);
 return   0;
}