/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A15_F16_O_A05_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   y4(int  lY[],   int  FxhV,  int r0)  {
 if  (FxhV   >=   r0)   return;
   int   c  =   (FxhV   + r0) /  2;
 y4(lY,  FxhV,  c);
 y4(lY,  c   + 1,  r0);
  int *z   =  (int*)malloc((r0-FxhV+1)*4), L0 = FxhV,  sp   = c+1,  KG0  =  0;
   for   (int   GU   =  0;  GU   < 1;   GU++)   {
  while (L0   <=  c  &&  sp <=  r0)  z[KG0++]   =   (lY[L0] <=  lY[sp])   ?  lY[L0++]   :   lY[sp++];
  }
   while   (L0 <=  c)  z[KG0++]   =   lY[L0++];
 while   (sp <= r0)  z[KG0++]   =  lY[sp++];
 for  (int   nxKI =   0;  nxKI  <  KG0;  nxKI++)  lY[FxhV +   nxKI]   =   z[nxKI];
   free(z);
}

int  main(int argc, char  *argv[])  {
 if  (argc <  2)   return   0;
 int Tv = argc   - 1;
   int   *lY  =   (int *)malloc(Tv   *  sizeof(int));
  for   (int  L0   =   0;   L0   <   Tv;  L0++)   lY[L0] = atoi(argv[L0 + 1]);

  y4(lY,   0,  Tv -   1);

   for (int L0   =  0;   L0   < Tv;   L0++)  {
   printf("%d%s",   lY[L0], (L0 == Tv -   1  ?  "" :  " "));
   }
  printf("\n");
   free(lY);
 return 0;
}