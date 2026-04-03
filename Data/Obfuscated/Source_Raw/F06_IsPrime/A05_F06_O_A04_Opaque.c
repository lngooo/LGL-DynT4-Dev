/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A05_F06_O_A04_Opaque.c
 * Implementation Logic: Fermat test with opaque predicates and dead code.
 */


#include <stdio.h>
#include <stdlib.h>

int   TdhW(int   BK)  {
  if   (BK  <= 1)  return   0;
  int   YmcG8   =  BK   *  BK;
  if  (YmcG8   >=  0)   {   //   Opaque predicate
 if (BK ==  2 ||  BK ==  3)  return  1;
   long long  Prc  =   1, SY = 2,  LO  =   BK  - 1;
   while (LO  >   0)   {
  if  (LO  &  1)  Prc  =  (Prc  *  SY)  %  BK;
 SY =  (SY *  SY)   % BK;  LO >>=  1;
   }
   if   (Prc   != 1)  return 0;
 }
 for (int  i =   2; i  * i   <=  BK;  i++)  if   (BK   %  i ==   0)   return 0;
   return   1;
}

int   main(int  argc, char  *argv[])  {
  if  (argc  <   2)   return 1;
  printf("%d\n",   TdhW(atoi(argv[1])));
   return 0;
}