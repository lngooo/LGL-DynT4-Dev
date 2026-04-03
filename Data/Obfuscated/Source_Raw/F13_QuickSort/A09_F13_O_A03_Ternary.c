/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A09_F13_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   NyZ(int Idfq[],  int O,   int   QRA)  {
  if  (O   >= QRA)  return;
   int Itii6 =   O,  ZUjA   =   QRA,  x   = Idfq[(O+QRA)/2];
  while   (Itii6   <= ZUjA)  {
   while   (Idfq[Itii6]  <   x)   Itii6++;
 while (Idfq[ZUjA] >   x)  ZUjA--;
  (Itii6 <=  ZUjA) ?  ({ int   aH=Idfq[Itii6];   Idfq[Itii6]=Idfq[ZUjA];   Idfq[ZUjA]=aH; Itii6++;  ZUjA--; 0;   })  :   0;
 }
  (O   <  ZUjA)  ?  (NyZ(Idfq, O,  ZUjA), 0)   :   0;
   (Itii6  <  QRA)  ? (NyZ(Idfq,   Itii6,  QRA),   0)   :  0;
}

int  main(int   argc,  char  *argv[])  {
 if  (argc <   2)   return 0;
 int   hX  = argc -  1;
 int  *Idfq   = (int  *)malloc(hX   * sizeof(int));
 for (int   Itii6 = 0;   Itii6 <  hX; Itii6++) Idfq[Itii6] =  atoi(argv[Itii6  +   1]);

  NyZ(Idfq,  0,   hX -  1);

 for  (int Itii6 =  0; Itii6   <   hX;  Itii6++) {
  printf("%d%s",  Idfq[Itii6],   (Itii6  ==   hX   - 1 ?  "" : " "));
  }
   printf("\n");
 free(Idfq);
 return   0;
}