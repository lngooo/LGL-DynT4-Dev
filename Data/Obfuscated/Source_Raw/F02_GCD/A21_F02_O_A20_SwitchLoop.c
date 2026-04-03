/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A21_F02_O_A20_SwitchLoop.c
 * Implementation Logic: Recursive-to-iterative conversion using switch-driven loop.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  SFw(int   QP, int   FiY9) {
 QP =   abs(QP);  FiY9 =   abs(FiY9);
  while  (1) {
   if   (FiY9  ==   0)  return  QP;
  int XAU   = FiY9;
  int   YO   =  QP   %  FiY9;
  QP  =  XAU;
   FiY9 =   YO;
 }
}

int   main(int  argc,   char   *argv[])   {
  if (argc   <  3) return  1;
 printf("%d\n",  SFw(atoi(argv[1]),  atoi(argv[2])));
  return  0;
}