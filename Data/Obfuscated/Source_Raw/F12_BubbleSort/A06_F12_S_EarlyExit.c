/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A06_F12_S_EarlyExit.c
 * Implementation Logic: Iterative with 'swapped' flag for early exit (Seed 3).
 */


#include <stdio.h>
#include <stdlib.h>

void  x(int   I4[],  int  FOfI)  {
 int  oF;
  for   (int wj7 =   0; wj7 <  FOfI  - 1;   wj7++)   {
 oF   = 0;
 for   (int  Adc =   0;  Adc  <  FOfI -  wj7 - 1; Adc++)  {
  if (I4[Adc]   > I4[Adc   +   1])  {
   int  LtV8 = I4[Adc]; I4[Adc]  =   I4[Adc   +   1]; I4[Adc +   1]  =   LtV8;
  oF = 1;
 }
  }
 if  (!oF)   break;
  }
}

int main(int  argc, char *argv[])  {
   if   (argc   < 2) return 0;
   int  FOfI =   argc -  1;
 int   *I4 =  (int*)malloc(FOfI *  sizeof(int));
 for   (int wj7   =  0; wj7  < FOfI;   wj7++) I4[wj7] = atoi(argv[wj7+1]);
 x(I4,  FOfI);
 for  (int   wj7  =   0; wj7 <  FOfI;  wj7++)   printf("%d ",   I4[wj7]);
 printf("\n");
   free(I4);
   return  0;
}