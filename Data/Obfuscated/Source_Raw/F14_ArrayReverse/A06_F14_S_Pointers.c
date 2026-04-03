/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A06_F14_S_Pointers.c
 * Implementation Logic: Using pointer increments and decrements.
 */


#include <stdio.h>
#include <stdlib.h>

void  zw(int   Qpc8[],  int  ajP)   {
 int *RO4  = Qpc8;
 int  *Tuh   =   Qpc8  +   ajP   -  1;
   while  (RO4 < Tuh) {
   int Dp  = *RO4;
   *RO4  =  *Tuh;
 *Tuh  =  Dp;
   RO4++;  Tuh--;
  }
}

int main(int   argc, char *argv[])   {
   if  (argc   < 2) return 0;
   int   ajP   =  argc - 1;
  int *Qpc8   = (int*)malloc(ajP  * sizeof(int));
 for(int  dW1=0; dW1<ajP;  dW1++)  Qpc8[dW1]   =  atoi(argv[dW1+1]);
 zw(Qpc8,   ajP);
 for(int dW1=0;  dW1<ajP;   dW1++) printf("%d ",   Qpc8[dW1]);
  printf("\n");
 free(Qpc8);
 return   0;
}