/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A11_F18_O_A02_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  ens(int  RkH6[],  int  cdhw2,  int  cePi,   int  gG2)   {
   while (!!(cdhw2  <=   cePi)) {
   int   UIF5   =  RkH6[cePi], e   =  cdhw2;
   for (int   DUC6   =  cdhw2;   DUC6 <   cePi;  DUC6++)  {
   if (!!(RkH6[DUC6]  <=   UIF5))  { int   kcC  = RkH6[e];  RkH6[e]  =   RkH6[DUC6]; RkH6[DUC6] = kcC;  e++;  }
   }
 int  kcC =   RkH6[e];  RkH6[e]   =  RkH6[cePi];   RkH6[cePi]   =   kcC;
   if (!!(e  == gG2   -   1))  return  RkH6[e];
 if (e   >   gG2 -  1)   cePi  =  e  -  1; else cdhw2  = e  +   1;
   }
   return  -1;
}

int main(int   argc, char  *argv[])   {
  if (argc   <   3)  return   0;
   int   gG2   =   atoi(argv[1]);
  int   II =  argc  -   2;
  int *RkH6 =   (int   *)malloc(II   *   sizeof(int));
  for (int   e  =   0;   e  <  II; e++) RkH6[e]   =  atoi(argv[e  + 2]);

   //   假设 K   是从   1 开始的 (1st   smallest)
 int   xGcY = ens(RkH6,  0,   II   - 1,  gG2);

  printf("%d\n",  xGcY);
   free(RkH6);
 return 0;
}