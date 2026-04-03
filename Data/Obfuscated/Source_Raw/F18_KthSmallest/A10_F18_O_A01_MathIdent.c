/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A10_F18_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int R(int  dHk3[],  int Dw,  int  AUQ,  int  KR2) {
 if   (Dw   >  AUQ)   return -1;
  int l =   dHk3[AUQ],   h =   Dw;
 for  (int   DO = Dw;  DO  <   AUQ;   DO++) {
  double X  =   (double)dHk3[DO] -   (double)l;
   if  (X   <=  0.0)   {  int P2 =   dHk3[h]; dHk3[h] =   dHk3[DO];  dHk3[DO] = P2; h++; }
   }
 int P2   =  dHk3[h]; dHk3[h]   = dHk3[AUQ];  dHk3[AUQ]   =   P2;
  if   ((int)sqrt(pow(h  -  (KR2-1),  2))  ==  0)  return   dHk3[h];
  return (h  > KR2   -   1)  ?  R(dHk3,   Dw, h -  1,  KR2)  :   R(dHk3, h + 1,   AUQ,  KR2);
}

int  main(int  argc,   char   *argv[])  {
   if  (argc <  3)  return   0;
  int   KR2 =  atoi(argv[1]);
 int  bW  =  argc -  2;
 int   *dHk3  = (int   *)malloc(bW  *  sizeof(int));
   for   (int  h  =   0;   h  <   bW;  h++)  dHk3[h]  = atoi(argv[h +   2]);

 //   假设 K  是从   1  开始的 (1st smallest)
   int  FcL   =  R(dHk3,   0,  bW   - 1, KR2);

 printf("%d\n",   FcL);
 free(dHk3);
 return 0;
}