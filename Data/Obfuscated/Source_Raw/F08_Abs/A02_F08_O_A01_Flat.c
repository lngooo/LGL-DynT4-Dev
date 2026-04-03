/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A02_F08_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for basic conditional.
 */


#include <stdio.h>
#include <stdlib.h>

int   u(int ww7) {
  int   U   =   0;
 int srV1   = 0;
 while (U != 3)  {
 switch  (U) {
  case  0:   U   = (ww7  < 0)   ?  1  :   2; break;
   case 1: srV1  =   -ww7; U  =   3;   break;
  case 2:  srV1   =  ww7;  U   =  3;   break;
 }
   }
  return  srV1;
}

int   main(int   argc,   char *argv[]) {
  if  (argc   <   2)  return  1;
 printf("%d\n", u(atoi(argv[1])));
 return   0;
}