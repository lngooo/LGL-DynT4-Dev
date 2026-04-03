/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A02_F09_O_A01_Flat.c
 * Implementation Logic: Control flow flattening for iterative Newton.
 */


#include <stdio.h>
#include <stdlib.h>

int  Dv(int   Tjp)   {
  if (Tjp  <   0)   return   -1;
   long  ess, RJiX;
   int Bk  = 0;
  while  (Bk != 3)   {
   switch   (Bk) {
  case 0:  ess   =  Tjp;  RJiX   =  (ess   +   1) /  2;   Bk =   1;  break;
 case 1:  Bk  =  (RJiX  <   ess) ? 2  :  3; break;
  case   2: ess =  RJiX;   RJiX  =   (ess   +   Tjp  /   ess)  /  2; Bk  =   1;  break;
   }
  }
  return   (int)ess;
}

int  main(int  argc, char *argv[])   {
 if  (argc  <  2)   return  1;
   printf("%d\n", Dv(atoi(argv[1])));
 return   0;
}