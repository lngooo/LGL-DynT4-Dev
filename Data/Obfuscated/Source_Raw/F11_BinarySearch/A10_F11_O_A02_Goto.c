/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A10_F11_O_A02_Goto.c
 * Implementation Logic: Recursive logic of A02 replaced by goto chain.
 */


#include <stdio.h>
#include <stdlib.h>

int   Nruy(int   OLBa[],   int  QZ1, int   Ofg)  {
 int m  =   0,  HzLQ  = QZ1   - 1,  VTJu;
cv1:
 if (m   > HzLQ) goto   zh;
   VTJu   = m + (HzLQ  -  m)  /  2;
  if (OLBa[VTJu] ==  Ofg) goto   V;
   if   (OLBa[VTJu]  < Ofg)   {   m  =   VTJu +  1;   goto cv1;  }
 HzLQ  =  VTJu  -  1;   goto cv1;
V:
   return   VTJu;
zh:
 return -1;
}

int   main(int argc,  char *argv[]) {
 if (argc   < 3)  return  1;
  int   Ofg = atoi(argv[1]);
  int QZ1   =  argc -  2;
   int *OLBa = (int*)malloc(QZ1 *  sizeof(int));
  for(int  gdq1=0; gdq1<QZ1;  gdq1++)   OLBa[gdq1]   = atoi(argv[gdq1+2]);
  printf("%d\n",   Nruy(OLBa, QZ1,  Ofg));
   free(OLBa);
  return  0;
}