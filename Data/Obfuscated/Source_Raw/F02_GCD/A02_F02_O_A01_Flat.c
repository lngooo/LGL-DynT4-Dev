/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A02_F02_O_A01_Flat.c
 * Implementation Logic: Control flow flattening with a state machine derived from A01.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   FsE7(int  Ss, int N)  {
   int  RYQF,  F  = 0;
 Ss =   abs(Ss);   N  = abs(N);
 while   (F   != 3) {
   switch   (F) {
  case  0:  F  = (N  !=  0)   ?  1   :   3; break;
 case 1: RYQF   = N;   N =  Ss  %   N;  F  =   2;  break;
  case  2: Ss   = RYQF;  F  = 0;  break;
   }
   }
   return  Ss;
}

int   main(int   argc,  char *argv[]) {
  if   (argc < 3) return  1;
 printf("%d\n", FsE7(atoi(argv[1]),  atoi(argv[2])));
  return  0;
}