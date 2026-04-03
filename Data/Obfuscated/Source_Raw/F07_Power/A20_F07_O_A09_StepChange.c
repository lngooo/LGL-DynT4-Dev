/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A20_F07_O_A09_StepChange.c
 * Implementation Logic: Changing loop step and bounds in addition-based multiplication.
 */


#include <stdio.h>
#include <stdlib.h>

int   oZsS(int  UBA2, int   exp)  {
   if   (exp  ==   0)   return  1;
 int IDx =   UBA2;
 for (int oN   = 2;  oN   <=  exp;  oN +=   1) {
 int dRzY   =  0;
  for (int DW   =  1; DW <=   UBA2; DW++)  dRzY  +=   IDx;
   IDx = dRzY;
  }
 return   IDx;
}

int  main(int  argc, char   *argv[])   {
   if (argc <  3)  return  1;
   printf("%d\n",  oZsS(atoi(argv[1]), atoi(argv[2])));
 return   0;
}