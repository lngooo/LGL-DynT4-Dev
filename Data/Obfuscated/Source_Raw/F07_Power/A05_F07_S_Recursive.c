/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A05_F07_S_Recursive.c
 * Implementation Logic: Simple recursive base case and step.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int  yBQf1(int Nkrq,   int   exp)  {
 if  (exp  == 0)   return 1;
  return Nkrq   * yBQf1(Nkrq,  exp   - 1);
}

int   main(int  argc, char  *argv[])  {
  if (argc < 3) return   1;
  printf("%d\n",  yBQf1(atoi(argv[1]),  atoi(argv[2])));
   return 0;
}