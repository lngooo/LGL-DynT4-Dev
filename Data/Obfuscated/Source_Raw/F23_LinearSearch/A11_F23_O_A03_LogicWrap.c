/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A11_F23_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  i0(int  z[], int kb5,   int y)   {
   if  (kb5   <= 0)   return   -1;
   int  gi2  = z[kb5-1],  QxZ  =  -1;
 z[kb5-1]  =  y;
 while  (z[++QxZ]   !=   y);
 z[kb5-1]  =  gi2;
  if   (QxZ  ==   kb5  -  1)  return  (gi2  ==   y)  ?   QxZ  :   -1;
  return  QxZ;
}

int   main(int argc,  char *argv[])   {
  if  (argc <  3)  return   1;
   int   y  =  atoi(argv[1]);
  int S5 =  argc   -   2;
 int  z[100];
   for (int  QxZ  =   0;  QxZ <  S5; QxZ++)  {
  z[QxZ]  =   atoi(argv[QxZ  +   2]);
  }
 int   DHX   = i0(z,  S5,   y);
  printf("%d\n",  DHX);
 return   0;
}