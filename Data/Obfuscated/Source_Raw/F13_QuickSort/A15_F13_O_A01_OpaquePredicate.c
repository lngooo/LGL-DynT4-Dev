/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A15_F13_O_A01_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void L(int Siyu0[], int   Rm0,  int   Zv)  {
  if   (Rm0 < Zv)   {
  if   ((Zv  * Zv +  1) >  0)  {
 int   olP  = Siyu0[Zv],  Hr  = Rm0   -  1;
  for   (int UeaM   =   Rm0;  UeaM  <  Zv;   UeaM++) {
 if  (Siyu0[UeaM]   <  olP)   {   Hr++; int pI  =   Siyu0[Hr];   Siyu0[Hr]  =  Siyu0[UeaM]; Siyu0[UeaM]   =  pI;  }
   }
  int  pI = Siyu0[Hr+1]; Siyu0[Hr+1] =  Siyu0[Zv]; Siyu0[Zv]  =  pI;
  L(Siyu0,   Rm0,   Hr);
   L(Siyu0,  Hr  +   2, Zv);
 }
  }
}

int   main(int  argc,   char  *argv[])   {
 if (argc   < 2)  return 0;
   int   FEWi5  = argc -  1;
   int   *Siyu0 = (int  *)malloc(FEWi5  *  sizeof(int));
 for  (int   Hr   =  0; Hr <  FEWi5;  Hr++)   Siyu0[Hr]   =   atoi(argv[Hr   + 1]);

   L(Siyu0,   0,   FEWi5   -   1);

 for (int  Hr   =   0;  Hr  <   FEWi5;   Hr++)  {
   printf("%d%s",  Siyu0[Hr],  (Hr   == FEWi5  -  1 ?  "" : " "));
  }
   printf("\n");
 free(Siyu0);
 return   0;
}