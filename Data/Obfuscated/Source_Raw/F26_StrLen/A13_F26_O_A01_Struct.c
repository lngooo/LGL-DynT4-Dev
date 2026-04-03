/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A13_F26_O_A01_Struct.c
 * Implementation Logic: Wrapping index in structure.
 */


#include <stdio.h>

struct   cB0   {  int  FEdK; };

int v1(const   char  *Mlp) {
  struct   cB0   qSaC   =  {0};
   while  (Mlp[qSaC.FEdK]) qSaC.FEdK++;
  return qSaC.FEdK;
}

int  main(int  argc,   char *argv[])   {
  if (argc  < 2)   return   0;
   printf("%d\n",  v1(argv[1]));
  return 0;
}