/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A09_F06_O_A08_Ternary.c
 * Implementation Logic: Recursive logic using ternary operators for Token density.
 */


#include <stdio.h>
#include <stdlib.h>

int  Vka0(int  QJd,   int   P) {
   return (P   *  P  > QJd) ? 1 :  (QJd  % P ==  0   ?  0 :  Vka0(QJd, P  + 1));
}

int Lc(int   QJd)  {
   return   (QJd  < 2) ? 0  :  Vka0(QJd,   2);
}

int  main(int argc,   char   *argv[])   {
 if  (argc <   2)  return   1;
   printf("%d\n",  Lc(atoi(argv[1])));
   return   0;
}