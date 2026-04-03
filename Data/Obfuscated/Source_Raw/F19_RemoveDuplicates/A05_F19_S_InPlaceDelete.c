/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A05_F19_S_InPlaceDelete.c
 * Implementation Logic: InPlaceDelete
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  wCL(int   W[],  int  KCdY) {
  int i  =   KCdY;
  for  (int   ViE   = 0;  ViE   <  i; ViE++) {
 for   (int   G  = ViE  +  1;  G < i; G++) {
 if   (W[ViE]  ==  W[G]) {
  for   (int  fKJ =   G;  fKJ   <   i - 1;   fKJ++)   W[fKJ]   =   W[fKJ  +   1];
  i--; G--;
  }
 }
   }
  return  i;
}

int   main(int   argc,  char   *argv[])   {
   if (argc  < 2)   return   0;
  int   TkL4 =  argc  -   1;
  int  W[128];
  for   (int  ViE   =  0;   ViE   <   TkL4;   ViE++) {
   W[ViE]  = atoi(argv[ViE +   1]);
  }
 int   xv5   =   wCL(W, TkL4);
  for   (int   ViE   = 0;  ViE   <  xv5;  ViE++) {
   printf("%d%s",  W[ViE], (ViE   ==  xv5 -   1 ?  ""  : " "));
   }
 printf("\n");
  return 0;
}