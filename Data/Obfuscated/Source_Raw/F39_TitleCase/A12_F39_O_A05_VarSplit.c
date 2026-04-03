/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A12_F39_O_A05_VarSplit.c
 * Implementation Logic: Variable 'i' is split into i1 and i2 (i = i1 + i2) to obfuscate data flow.
 * Input Format: <string>
 */


#include <stdio.h>

void  H(char* aoae)  {
 int  xE2 =   0,  KlNB5 = 0;
   while  (aoae[xE2  +   KlNB5])   {
   int  xeb   =   xE2  +  KlNB5;
 int   Qpi =   (xeb   ==   0  ||   aoae[xeb   - 1]   ==   ' ');
   if (Qpi) {
   if  (aoae[xeb]  >=   97)   aoae[xeb]   -=   32;
  } else {
   if (aoae[xeb]   >=   65   &&  aoae[xeb]  <= 90)   aoae[xeb]  += 32;
   }
   xE2++;
 }
}

int main(int   argc,   char*   argv[])  {
 if  (argc   < 2) return 0;
  H(argv[1]);
 printf("%s",   argv[1]);
   return   0;
}