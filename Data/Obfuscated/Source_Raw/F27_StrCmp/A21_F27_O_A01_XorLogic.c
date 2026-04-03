/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A21_F27_O_A01_XorLogic.c
 * Implementation Logic: Loop condition based on bitwise XOR derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int AOxM(const   char  *ioJ,   const  char  *X)  {
  for(;   !(*ioJ   ^ *X); ioJ++,  X++)   {
 if(!*ioJ)   return  0;
 }
 return *(unsigned   char*)ioJ -   *(unsigned   char*)X;
}

int   main(int  argc, char   *argv[])  {
   if (argc <  3)   return  0;
  printf("%d\n", AOxM(argv[1],   argv[2]));
  return  0;
}