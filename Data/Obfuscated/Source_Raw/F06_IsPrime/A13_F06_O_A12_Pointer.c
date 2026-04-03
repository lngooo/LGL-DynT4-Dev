/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A13_F06_O_A12_Pointer.c
 * Implementation Logic: Sieve logic using pointer arithmetic instead of indexing.
 */


#include <stdio.h>
#include <stdlib.h>

int   FrJ(int   QWI)  {
   if  (QWI   < 2) return   0;
  int *Y   =  (int *)calloc(QWI   +  1,   sizeof(int));
  for (int   a  =  2;   a   * a  <=  QWI;  a++)   {
   if (*(Y   +  a)  ==   0) {
   for (int   LUhF   =   a   * a; LUhF  <= QWI;  LUhF   +=   a)  *(Y +  LUhF) =  1;
   }
   }
 int XNm = (*(Y   +   QWI) == 0);
  free(Y);
   return XNm;
}

int main(int  argc,  char  *argv[]) {
   if  (argc   <  2)   return 1;
   printf("%d\n", FrJ(atoi(argv[1])));
   return   0;
}