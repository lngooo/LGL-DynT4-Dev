/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A20_F31_O_A04_NestedWhile.c
* Implementation Logic: Deeply nested loops with redundant checks derived from A04.
*/


#include <stdio.h>
#include <ctype.h>

int  eR(char* dTa2)  {
  int sNHg   = 0;
 while (*dTa2)   {
   if   (isspace(*dTa2))   {
   while   (*dTa2  &&   isspace(*dTa2))  dTa2++;
  }   else {
  sNHg++;
 while  (*dTa2  && !isspace(*dTa2)) {
 if   (*dTa2  ==  0)  break;
   dTa2++;
   }
   }
 }
 return  sNHg;
}

int   main(int argc,  char*  argv[])   {
   if (argc   < 2)   return  0;
 printf("%d\n", eR(argv[1]));
  return  0;
}