/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A03_F13_S_MiddlePivot.c
 * Implementation Logic: MiddlePivot
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void D(int QPS[],  int  o2, int  lxu)   {
   int kNhw5   = o2,   DkmG =  lxu;
  int CYY  = QPS[(o2 +   lxu)   /  2];
   while  (kNhw5  <= DkmG)  {
 while  (QPS[kNhw5] <   CYY) kNhw5++;
  while  (QPS[DkmG]  > CYY)   DkmG--;
   if  (kNhw5 <= DkmG) {
   int   eGpI5  =  QPS[kNhw5];   QPS[kNhw5] =  QPS[DkmG];   QPS[DkmG]   =  eGpI5;
  kNhw5++;  DkmG--;
 }
  }
 if (o2 <   DkmG)   D(QPS,   o2, DkmG);
 if  (kNhw5 < lxu)  D(QPS, kNhw5,  lxu);
}

int  main(int argc,  char *argv[])   {
 if  (argc   <  2)   return  0;
  int Qmzj   =   argc -   1;
  int *QPS =   (int  *)malloc(Qmzj   * sizeof(int));
  for  (int  kNhw5  =   0;   kNhw5   <   Qmzj;   kNhw5++) QPS[kNhw5]   = atoi(argv[kNhw5 +   1]);

   D(QPS,  0,   Qmzj   -  1);

  for  (int  kNhw5 =   0; kNhw5  <   Qmzj;   kNhw5++)  {
 printf("%d%s",  QPS[kNhw5], (kNhw5  ==  Qmzj - 1   ?  ""   :   " "));
 }
 printf("\n");
  free(QPS);
  return   0;
}