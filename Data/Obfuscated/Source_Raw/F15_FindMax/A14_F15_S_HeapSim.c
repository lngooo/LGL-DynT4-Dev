/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A14_F15_S_HeapSim.c
 * Implementation Logic: Finding max via building a max-heap (Seed 7).
 */


#include <stdio.h>
#include <stdlib.h>

void G(int  Ao6[],   int   I8, int  lLe) {
 int  wE  =  lLe,  Y  =  2*lLe+1,  ap =   2*lLe+2;
  if (Y  < I8  &&  Ao6[Y]   >  Ao6[wE])   wE =   Y;
   if   (ap   <  I8  &&  Ao6[ap]  >  Ao6[wE])   wE  =   ap;
  if   (wE !=  lLe)   {
   int  hTK =   Ao6[lLe];  Ao6[lLe] =  Ao6[wE];   Ao6[wE]  =  hTK;
 G(Ao6, I8,  wE);
  }
}

int  Nclr3(int  lpoG8[],   int  I8)  {
 int  *MLmB = (int*)malloc(I8  *  sizeof(int));
  for(int  lLe=0; lLe<I8;  lLe++)   MLmB[lLe]  =  lpoG8[lLe];
 for  (int lLe =  I8/2  - 1;   lLe >= 0;   lLe--)   G(MLmB, I8, lLe);
   int   kt =   MLmB[0];
  free(MLmB);
   return kt;
}

int  main(int  argc,  char  *argv[])   {
   if (argc <   2)  return   0;
  int  I8 =   argc  -   1;
   int  *lpoG8  = (int*)malloc(I8  * sizeof(int));
 for   (int lLe  =  0; lLe   <   I8;   lLe++) lpoG8[lLe] =  atoi(argv[lLe+1]);
  printf("%d\n", Nclr3(lpoG8,   I8));
   free(lpoG8);
 return 0;
}