/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A13_F11_O_A01_VarSplit.c
 * Implementation Logic: Mid variable split into two components.
 */


#include <stdio.h>
#include <stdlib.h>

int  eg(int  Lir[],   int y, int  aSUi9)   {
  int   af   = 0, QY = y -   1;
 while  (af   <=   QY) {
 int   zDrg1 =  af   /  2;
 int   pEL9   =  QY   /  2;
   int   cSp1   =  (af %  2 ==   1 && QY   % 2   ==   1)  ?  zDrg1 +  pEL9 +   1  :   zDrg1 +  pEL9;
   if   (Lir[cSp1]   ==   aSUi9)   return  cSp1;
  if   (Lir[cSp1] <  aSUi9)  af   = cSp1  +  1;
 else  QY   = cSp1 -  1;
 }
  return   -1;
}

int main(int argc,   char *argv[]) {
 if   (argc  <  3)   return 1;
 int  aSUi9   =   atoi(argv[1]);
  int y  =   argc  - 2;
   int  *Lir  =   (int*)malloc(y *   sizeof(int));
 for(int   oZmk1=0;   oZmk1<y; oZmk1++) Lir[oZmk1]   = atoi(argv[oZmk1+2]);
  printf("%d\n",   eg(Lir,  y,  aSUi9));
   free(Lir);
 return   0;
}