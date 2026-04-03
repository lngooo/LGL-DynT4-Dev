/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A18_F35_O_A02_VarSplit.c
 * Logic: strchr check with count split into two variables.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int g3(const char*  Y) {
   int K   =   0,  I   = 0;
   const  char* YrT0   =   "aeiouAEIOU";
  for(int  Tkz9=0; Y[Tkz9]; Tkz9++)   {
  if (strchr(YrT0,   Y[Tkz9]))  {
 if (Tkz9 % 2  ==  0) K++;  else I++;
   }
   }
  return  K   + I;
}

int   main(int  argc, char* argv[])   {
 if  (argc  <  2)  { printf("0\n");   return 0;   }
   printf("%d\n",   g3(argv[1]));
  return  0;
}