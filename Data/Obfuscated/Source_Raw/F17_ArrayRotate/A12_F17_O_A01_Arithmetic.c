/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A12_F17_O_A01_Arithmetic.c
 * Logic: Reversal with XOR swapping and pointer arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

void  Jk1(int   *TG,  int *D)   {
   while(TG   < D)  {
   *TG  ^=   *D;   *D  ^= *TG;   *TG ^=  *D;
 TG++;   D--;
 }
}

void  b1(int KN[],   int WgVp,   int V)  {
  if (WgVp   ==  0) return;
   V  %= WgVp;
  Jk1(KN,  KN   +  V   -  1);
   Jk1(KN   +   V,   KN +  WgVp  -   1);
 Jk1(KN, KN +   WgVp -   1);
}

int  main(int   argc,   char   *argv[])  {
  if  (argc   <   3)  return  0;
 int   V  = atoi(argv[1]);
   int  WgVp   =   argc  -   2;
   int *KN   =  (int*)malloc(WgVp   * sizeof(int));
   for(int   KlA=0; KlA<WgVp;   KlA++)  KN[KlA]  =  atoi(argv[KlA+2]);
   b1(KN,  WgVp, V);
 for(int  KlA=0; KlA<WgVp;  KlA++)  printf("%d ",   KN[KlA]);
  printf("\n");
  free(KN);
  return   0;
}