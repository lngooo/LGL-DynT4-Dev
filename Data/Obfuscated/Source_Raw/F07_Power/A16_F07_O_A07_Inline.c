/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A16_F07_O_A07_Inline.c
 * Implementation Logic: Pseudo-inlined recursive state.
 */


#include <stdio.h>
#include <stdlib.h>

int fJLb(int   Ih, int exp)  {
   int EK  =   1;
   asKU:
   if  (exp   <= 0)  return   EK;
  EK  *=  Ih;
   exp--;
  goto  asKU;
}

int  main(int argc, char   *argv[])   {
   if  (argc   < 3)  return  1;
   printf("%d\n",  fJLb(atoi(argv[1]),  atoi(argv[2])));
 return 0;
}