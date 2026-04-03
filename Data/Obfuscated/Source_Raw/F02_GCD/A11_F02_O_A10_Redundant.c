/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A11_F02_O_A10_Redundant.c
 * Implementation Logic: Brute force with redundant arithmetic and split variables.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  NoZJ1(int tZDt9,   int Achr) {
   int   sp = abs(tZDt9), hUhW  =  abs(Achr);
  if (sp  *   hUhW ==  0)   return   sp  +   hUhW;
   int ZMpr   = 1;
   int KpQt   =  (sp   <  hUhW)   ?  sp  : hUhW;
  for   (int  EPLJ7   =  1;   EPLJ7   <=   KpQt;   EPLJ7++)   {
  int   YOO  = sp %  EPLJ7;
   int  E9 =  hUhW  %   EPLJ7;
 if   (YOO   ==  0  &&  E9  ==   0)   ZMpr  =  EPLJ7;
 }
   return   ZMpr;
}

int   main(int  argc,  char  *argv[]) {
  if (argc  <   3) return  1;
  printf("%d\n",   NoZJ1(atoi(argv[1]),  atoi(argv[2])));
   return  0;
}