/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A02_F07_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int   o0(int   Aa,   int exp)   {
  int  CRVA  =   1,   Woet  =  0, uc =  0;
   while  (uc !=  -1) {
 switch (uc)  {
   case  0: uc =  (Woet <   exp) ? 1 :   2; break;
  case 1:   CRVA *=   Aa; Woet++; uc  = 0;   break;
   case 2:   uc  = -1; break;
  }
 }
  return CRVA;
}

int  main(int  argc,  char   *argv[]) {
  if  (argc   <  3) return   1;
   printf("%d\n", o0(atoi(argv[1]),  atoi(argv[2])));
  return   0;
}