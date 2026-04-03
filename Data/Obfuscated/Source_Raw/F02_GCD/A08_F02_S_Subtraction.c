/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A08_F02_S_Subtraction.c
 * Implementation Logic: Original Euclidean algorithm using repeated subtraction (Seed 4).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   scTs(int  HPc, int sPJX9) {
 HPc   =  abs(HPc);  sPJX9  =   abs(sPJX9);
 if   (HPc ==   0)  return  sPJX9;
  while  (sPJX9 !=   0) {
   if  (HPc  >  sPJX9)   HPc  = HPc - sPJX9;
   else sPJX9  =   sPJX9  -   HPc;
 }
  return  HPc;
}

int   main(int  argc, char   *argv[])  {
   if  (argc < 3) return 1;
  printf("%d\n", scTs(atoi(argv[1]),   atoi(argv[2])));
  return 0;
}