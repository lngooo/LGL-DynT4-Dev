/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A15_F19_O_A05_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NOG0(int of[],   int  t) {
  int   Egt   =   t;
 for   (int  w  =   0;  w   < Egt;  w++)  {
   int  e   =   w   +   1;
 b:
   if (e   >=  Egt) continue;
   if (of[w]  ==  of[e])  {
 for (int  YeHa5  =  e;   YeHa5   < Egt  - 1;   YeHa5++)   of[YeHa5] = of[YeHa5  + 1];
  Egt--;   goto   b;
 }
  e++;  goto   b;
   }
   return   Egt;
}

int   main(int  argc,  char   *argv[]) {
   if   (argc < 2)   return 0;
  int  c =   argc   -   1;
 int  of[128];
   for   (int   w   =   0;  w  <   c; w++)  {
 of[w]  = atoi(argv[w   +   1]);
  }
 int   rpX  = NOG0(of,   c);
   for   (int  w = 0;  w <   rpX;   w++) {
  printf("%d%s",  of[w],   (w   == rpX - 1 ?   ""   :  " "));
  }
   printf("\n");
 return   0;
}