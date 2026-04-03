/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A15_F26_O_A01_Volatile.c
 * Implementation Logic: StrLen with volatile qualifier.
 */


#include <stdio.h>

int uTG(const char *eYU1)  {
  volatile   int vXs  =  0;
   while   (eYU1[vXs]) vXs++;
  return   vXs;
}

int  main(int  argc, char *argv[])   {
 if  (argc < 2)   return  0;
   printf("%d\n",  uTG(argv[1]));
   return  0;
}