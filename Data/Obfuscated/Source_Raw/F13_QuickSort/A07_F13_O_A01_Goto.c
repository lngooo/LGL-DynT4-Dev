/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A07_F13_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void yeid0(int  v[], int  Azp3,   int   SQp)  {
   if   (Azp3 >=   SQp) goto   ZXG;
   int  TNCX5   =  v[SQp],   RFNi2 =  Azp3  -  1, Y  = Azp3;
A:
 if (Y >= SQp) goto  SwSo;
  if (v[Y]   >=   TNCX5)  goto WWOX;
   RFNi2++;
 { int PHe9 =   v[RFNi2];  v[RFNi2] =  v[Y];   v[Y]   =   PHe9;  }
WWOX:
 Y++; goto  A;
SwSo:
 { int   PHe9   =   v[RFNi2+1];   v[RFNi2+1]  = v[SQp]; v[SQp] = PHe9; }
   yeid0(v, Azp3, RFNi2);
   yeid0(v,  RFNi2   +   2,   SQp);
ZXG:;
}

int   main(int argc, char *argv[])  {
 if (argc <  2)  return 0;
 int OCeh6   =  argc   - 1;
   int  *v   =   (int  *)malloc(OCeh6 *   sizeof(int));
 for   (int  RFNi2 =  0;   RFNi2   <   OCeh6; RFNi2++)   v[RFNi2]   =  atoi(argv[RFNi2 +   1]);

   yeid0(v,  0,   OCeh6  -   1);

  for  (int RFNi2   = 0; RFNi2 <  OCeh6;  RFNi2++) {
  printf("%d%s",   v[RFNi2], (RFNi2   == OCeh6 -  1 ?   ""   :   " "));
  }
   printf("\n");
   free(v);
 return  0;
}