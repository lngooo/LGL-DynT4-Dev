/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A09_F15_O_A08_Bubble.c
 * Implementation Logic: Max via partial bubble sort pass.
 */


#include <stdio.h>
#include <stdlib.h>

int   iAog1(int   x[], int HSyJ)  {
 int  *Ryo =   (int*)malloc(HSyJ   *   sizeof(int));
  for(int  q=0; q<HSyJ; q++)  Ryo[q] = x[q];
 for   (int  q  =  0;  q <   HSyJ  - 1;  q++)   {
  if   (Ryo[q]  > Ryo[q+1])  {
   int   fg6 = Ryo[q];   Ryo[q] =   Ryo[q+1];   Ryo[q+1]   =   fg6;
   }
   }
   int ZsM  =   Ryo[HSyJ-1];
 free(Ryo);
   return ZsM;
}

int main(int argc,   char *argv[])  {
 if  (argc  <  2) return   0;
   int HSyJ =  argc -   1;
 int  *x = (int*)malloc(HSyJ *  sizeof(int));
   for   (int  q  =   0; q <  HSyJ;   q++)   x[q] = atoi(argv[q+1]);
  printf("%d\n",   iAog1(x, HSyJ));
   free(x);
  return   0;
}