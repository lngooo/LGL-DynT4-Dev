/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A20_F26_O_A01_PointerInc.c
 * Implementation Logic: Incrementing the base pointer.
 */


#include <stdio.h>

int Foy(const char   *wlna) {
   int IbJ5  =  0;
  while   (*(wlna++))   IbJ5++;
 return  IbJ5;
}

int   main(int  argc, char   *argv[])   {
  if  (argc <   2)   return   0;
   printf("%d\n",  Foy(argv[1]));
  return  0;
}