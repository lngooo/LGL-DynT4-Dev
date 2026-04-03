/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A19_F20_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Fp(int Bj[], int MDTM6)  {
 for (int   Gs  =   0; Gs <  MDTM6; Gs++)  {
  int  LtBt  =  Gs;
   for   (int   vN   =   Gs  + 1;   vN  < MDTM6; vN++)  {
   if   (Bj[vN]   <  Bj[LtBt]) {
   LtBt =   vN;
  goto Ut4;
   }
 Ut4:   ;
   }
   int   Y = Bj[Gs];   Bj[Gs] =   Bj[LtBt]; Bj[LtBt]   =   Y;
  }
}

int  main(int  argc,   char   *argv[])  {
 if   (argc  <  2)  return  0;
  int MDTM6 =   argc  -  1;
 int *Bj = (int   *)malloc(MDTM6   * sizeof(int));
  for  (int  Gs   =  0; Gs   <   MDTM6;   Gs++)   Bj[Gs]  = atoi(argv[Gs +   1]);

 Fp(Bj,  MDTM6);

 for   (int   Gs  = 0;   Gs  <   MDTM6;   Gs++)   {
 printf("%d%s",   Bj[Gs],   (Gs  ==  MDTM6 - 1  ?   ""   : " "));
   }
   printf("\n");
 free(Bj);
   return 0;
}