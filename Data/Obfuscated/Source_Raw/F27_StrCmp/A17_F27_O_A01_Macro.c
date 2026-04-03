/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A17_F27_O_A01_Macro.c
 * Implementation Logic: Core predicates from A01 hidden behind functional macros.
 */


#include <stdio.h>
#include <stdlib.h>

#define PaY(x, y) (*(x) == *(y))
#define ciZA(x) (*(x) != '\0')

int  XE(const  char   *TABf, const char  *WUL) {
   while (ciZA(TABf)   &&  PaY(TABf, WUL))  {
 TABf++;  WUL++;
 }
   return  *(unsigned char  *)TABf   - *(unsigned  char  *)WUL;
}

int   main(int argc, char *argv[])   {
   if  (argc < 3)   return   0;
  printf("%d\n", XE(argv[1],  argv[2]));
   return   0;
}