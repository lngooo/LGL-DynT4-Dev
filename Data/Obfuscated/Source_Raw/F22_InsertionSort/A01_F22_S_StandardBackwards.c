/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A01_F22_S_StandardBackwards.c
 * Implementation Logic: StandardBackwards
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  ZR(int  s[],   int   D) {
 for (int  YI   =   1;   YI < D; YI++)  {
 int  qhVg   = s[YI];
  int   Tvb   =   YI  -  1;
   while (Tvb >= 0  && s[Tvb]   >   qhVg) {
  s[Tvb   +  1] =  s[Tvb];
   Tvb  =  Tvb -   1;
  }
  s[Tvb   +  1] =  qhVg;
   }
}

int  main(int  argc,  char  *argv[])  {
 if (argc   <   2) return  0;
  int D   =   argc   - 1;
   int *s   = (int *)malloc(D   *   sizeof(int));
  for (int  YI   =  0;  YI   <   D; YI++)   s[YI] =  atoi(argv[YI + 1]);

   ZR(s, D);

 for (int YI  =   0;  YI  <  D; YI++) {
  printf("%d%s",   s[YI],   (YI ==   D  -  1  ?  ""  :   " "));
  }
  printf("\n");
 free(s);
  return   0;
}