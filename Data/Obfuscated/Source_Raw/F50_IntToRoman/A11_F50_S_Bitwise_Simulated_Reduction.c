/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A11_F50_S_Bitwise_Simulated_Reduction.c
 * Implementation Logic: Using bit-shifts to approximate division for place values.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   mJG(int   twz6,  char*   qYM2) {
 char*  d3[] =   {"M",   "CM", "D",  "CD",  "C",  "XC", "L",   "XL",   "X",  "IX", "V", "IV",   "I"};
   int  EUpD0[]  = {1000,  900, 500,   400, 100, 90,  50,   40,   10,   9,  5,  4,  1};
   qYM2[0]   =  '\0';
   int  p7  =   0;
   while(twz6  >  0)   {
  if (twz6   >= EUpD0[p7])   {
 strcat(qYM2,   d3[p7]);
   twz6  = twz6 -  EUpD0[p7];
 } else {
   p7 =   p7   + 1;
   }
   }
}

int   main(int   argc, char*   argv[]) {
   if  (argc <  2)   return   0;
 char  TQhb9[100];
  mJG(atoi(argv[1]),   TQhb9);
   printf("%s\n",  TQhb9);
 return   0;
}