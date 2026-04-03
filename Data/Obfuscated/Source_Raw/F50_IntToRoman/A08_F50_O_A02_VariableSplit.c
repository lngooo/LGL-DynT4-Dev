/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A08_F50_O_A02_VariableSplit.c
 * Implementation Logic: Variable splitting on A02 place values.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   li(int pJls,  char* hQpR7)   {
  char* kaYO0[]   =  {"",  "M", "MM", "MMM"};
  char*   goV[]   = {"", "C", "CC", "CCC",  "CD", "D", "DC", "DCC", "DCCC",   "CM"};
 char* gUC[]   =   {"",  "X",   "XX", "XXX",   "XL", "L",   "LX", "LXX",  "LXXX",   "XC"};
 char* b3[] = {"",  "I", "II", "III",  "IV",  "V",   "VI", "VII",  "VIII",   "IX"};

 int Bvrg =   pJls   / 100;  // th *  10  + hu
   int  MtI =   pJls  %   100; //  te * 10  +   on

 hQpR7[0]  =   '\0';
  strcat(hQpR7, kaYO0[Bvrg   /   10]);
 strcat(hQpR7,  goV[Bvrg  % 10]);
 strcat(hQpR7,  gUC[MtI  /  10]);
   strcat(hQpR7,   b3[MtI   %  10]);
}

int main(int  argc, char*   argv[])  {
  if (argc   <   2) return  0;
  char   cleX[100];
  li(atoi(argv[1]), cleX);
 printf("%s\n", cleX);
   return   0;
}