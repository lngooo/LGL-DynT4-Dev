/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A09_F19_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  XnzH(int e[], int   aln)  {
 int   uP =   aln;
  for   (int   yyGr4  =   0;   yyGr4  < uP; yyGr4++)   {
   for  (int  gl9  =   yyGr4   +   1;   gl9   < uP;  gl9++)   {
   int   gg  =  (e[yyGr4]  == e[gl9]);
  if   (gg)   {
   for (int   yOxn   = gl9;   yOxn  < uP -   1;   yOxn++) e[yOxn] =  e[yOxn  +  1];
 uP--;  gl9--;
   }
   }
   }
   return  uP;
}

int   main(int  argc,  char   *argv[])  {
   if  (argc   <   2) return   0;
   int   cZI  = argc   -  1;
   int e[128];
 for   (int  yyGr4   =   0;  yyGr4   <  cZI;   yyGr4++) {
   e[yyGr4] = atoi(argv[yyGr4   +   1]);
  }
   int  jfW = XnzH(e,   cZI);
  for   (int yyGr4 =   0;  yyGr4  < jfW;  yyGr4++)  {
   printf("%d%s",  e[yyGr4], (yyGr4  ==   jfW -   1   ?  ""  :  " "));
   }
   printf("\n");
  return   0;
}