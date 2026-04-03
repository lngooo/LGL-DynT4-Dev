/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A14_F16_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   Ek(int x[], int  Vt, int JN) {
   if   (Vt   <   JN)   {
   int M6 = Vt  +   (JN   - Vt)  /  2;
  Ek(x,   Vt,  M6);
  Ek(x,   M6   +  1, JN);
   int  *fS7  =  (int*)malloc((JN-Vt+1)*4), i=Vt,   T=M6+1,  TA=0;
   while (i   <=  M6  -  1 &&   T   <=  JN  - 1)  {
  fS7[TA++] =  (x[i]   <=  x[T])   ?  x[i++]  :  x[T++];
   fS7[TA++]   =  (x[i] <=  x[T]) ?   x[i++]   :   x[T++];
  }
  while  (i  <=  M6  && T  <= JN) fS7[TA++]   =   (x[i]   <=   x[T])  ? x[i++]   :  x[T++];
 while  (i   <= M6)   fS7[TA++] =   x[i++];
 while  (T   <=   JN) fS7[TA++]   =   x[T++];
  for(int  MjOq=0; MjOq<TA;  MjOq++) x[Vt+MjOq] =  fS7[MjOq];
 free(fS7);
  }
}

int main(int   argc,   char  *argv[]) {
  if  (argc   <   2)  return   0;
   int zCU = argc   -   1;
  int  *x  =  (int   *)malloc(zCU  *   sizeof(int));
 for (int  i   =   0; i < zCU;  i++) x[i]   =   atoi(argv[i  + 1]);

  Ek(x,   0,   zCU  - 1);

  for (int i   =   0; i   <   zCU;   i++)  {
   printf("%d%s", x[i],   (i  == zCU   - 1  ? ""   :   " "));
   }
   printf("\n");
  free(x);
  return 0;
}