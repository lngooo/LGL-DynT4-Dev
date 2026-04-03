/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A08_F20_O_A01_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   NfM(int  U[],   int  jot)   {
 int B  =  0,  zcwg2   = 0,   Cm,   n9;
   while (B !=   3) {
  switch   (B)   {
  case  0:   B  =   (zcwg2  <   jot   -   1)   ? 1 : 3;   break;
 case  1:  Cm = zcwg2;   n9 =  zcwg2 +   1; B   =   2; break;
 case  2:
  for   (; n9 <  jot;   n9++) if   (U[n9] <   U[Cm])   Cm  =   n9;
 int  fi = U[Cm];  U[Cm]  =   U[zcwg2];  U[zcwg2]   = fi;
  zcwg2++; B  =  0;  break;
 }
  }
}

int   main(int  argc, char   *argv[])  {
  if   (argc  <   2) return  0;
 int jot  = argc  -   1;
  int *U = (int   *)malloc(jot * sizeof(int));
  for  (int  zcwg2 =   0; zcwg2  <   jot;  zcwg2++) U[zcwg2]   =  atoi(argv[zcwg2   +  1]);

 NfM(U,   jot);

   for  (int zcwg2   = 0;   zcwg2  < jot; zcwg2++) {
   printf("%d%s", U[zcwg2],  (zcwg2  ==  jot   -  1   ?  "" :   " "));
   }
 printf("\n");
 free(U);
 return  0;
}