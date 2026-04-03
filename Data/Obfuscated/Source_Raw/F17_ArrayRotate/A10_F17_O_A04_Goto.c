/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A10_F17_O_A04_Goto.c
 * Logic: Step-by-step rotation using GOTO labels.
 */


#include <stdio.h>
#include <stdlib.h>

void  jF9(int  pMcV[],   int y,   int  Y)   {
   if  (y == 0)  return;
  Y  %=  y;
   int  s  =   0,  lQKR;
Lt:
  if   (s >= Y) goto oTb;
  int P   =   pMcV[0];
  lQKR  = 0;
t:
  if   (lQKR >= y   -   1)  goto m;
 pMcV[lQKR] = pMcV[lQKR +   1];
  lQKR++;
  goto t;
m:
  pMcV[y   - 1]   =   P;
  s++;
 goto  Lt;
oTb:
  return;
}

int   main(int  argc,   char  *argv[])  {
   if   (argc  < 3)   return 0;
 int Y  = atoi(argv[1]);
  int  y =  argc  -   2;
  int  *pMcV   =  (int*)malloc(y   *   sizeof(int));
 for(int  s=0; s<y;  s++)   pMcV[s]   =   atoi(argv[s+2]);
 jF9(pMcV,  y, Y);
 for(int  s=0; s<y;   s++)  printf("%d ",   pMcV[s]);
  printf("\n");
  free(pMcV);
  return  0;
}