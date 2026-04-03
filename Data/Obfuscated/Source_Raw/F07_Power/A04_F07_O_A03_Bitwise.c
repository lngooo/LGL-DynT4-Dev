/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A04_F07_O_A03_Bitwise.c
 * Implementation Logic: Instruction substitution using bitwise operators derived from A03.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int   Wi5(int  ejO7, int  exp)  {
  int  NwW   =   1;
 while  (exp  >   0)   {
  if  (exp &   1)  NwW   *=  ejO7;
  ejO7   *= ejO7;
   exp   >>= 1;
   }
 return   NwW;
}

int   main(int argc, char *argv[])  {
  if (argc   <  3) return 1;
  printf("%d\n",  Wi5(atoi(argv[1]),   atoi(argv[2])));
 return  0;
}