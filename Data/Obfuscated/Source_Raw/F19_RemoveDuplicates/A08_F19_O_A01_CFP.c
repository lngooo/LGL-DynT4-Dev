/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A08_F19_O_A01_CFP.c
 * Implementation Logic: CFP
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   GQO5(int   S[],  int  al)  {
 int MtY  = 0, N   =   0,  SVGk9  =  0;
  while  (SVGk9   !=  3) {
   switch   (SVGk9) {
   case  0:   SVGk9 =   (MtY <  al) ?   1 :  3;  break;
   case  1: {
   int   SpW  =   0;
   for  (int   pfoc   =   0; pfoc   < N; pfoc++)  if   (S[MtY]  ==  S[pfoc])  SpW   = 1;
 if  (!SpW)   {   S[N]  = S[MtY];  N++;  }
   MtY++; SVGk9 = 0;  break;
   }
 }
 }
 return  N;
}

int  main(int argc,  char *argv[])   {
 if   (argc   <   2)   return  0;
  int   jUN  =   argc   - 1;
 int S[128];
   for (int MtY  =  0; MtY   < jUN;  MtY++) {
   S[MtY]  =  atoi(argv[MtY + 1]);
   }
  int   y4   =  GQO5(S,  jUN);
  for (int  MtY   = 0;  MtY <   y4;  MtY++)   {
 printf("%d%s",   S[MtY], (MtY ==   y4 - 1 ?   ""   : " "));
   }
  printf("\n");
   return   0;
}