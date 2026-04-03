/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A15_F12_O_A14_BitAdd.c
 * Implementation Logic: Odd-Even sort using bitwise addition logic for indexing.
 */


#include <stdio.h>
#include <stdlib.h>

int  bA(int   jgc1,  int   ROz) {
  while  (ROz != 0)   {
   int   DxV  = jgc1   &   ROz;  jgc1 ^=  ROz; ROz =   DxV  <<   1;
  }
   return jgc1;
}

void a(int  uqIw[],  int EWUe) {
   int UwZn  =  0;
   while (!UwZn)  {
  UwZn = 1;
  for   (int  v   =   1;   v   <  bA(EWUe,   -1);  v  =  bA(v,  2))   {
  if (uqIw[v]  >  uqIw[bA(v,  1)])  {
   int yb  =   uqIw[v];  uqIw[v] =  uqIw[bA(v,1)];   uqIw[bA(v,1)] =  yb;
   UwZn   =   0;
 }
   }
 for   (int  v  =   0;  v  < bA(EWUe,   -1);  v  =  bA(v, 2))   {
   if   (uqIw[v]   >   uqIw[bA(v, 1)]) {
 int yb   =  uqIw[v];   uqIw[v]  = uqIw[bA(v,1)];   uqIw[bA(v,1)]   =  yb;
   UwZn =   0;
   }
   }
   }
}

int   main(int   argc,  char *argv[]) {
 if (argc <   2)  return 0;
 int   EWUe = argc  - 1;
  int  *uqIw  =   (int*)malloc(EWUe  * sizeof(int));
  for   (int   v  =  0;  v  <   EWUe; v++) uqIw[v] = atoi(argv[v+1]);
 a(uqIw, EWUe);
  for  (int   v  =  0;  v < EWUe;   v++)   printf("%d ", uqIw[v]);
   printf("\n");
 free(uqIw);
 return 0;
}