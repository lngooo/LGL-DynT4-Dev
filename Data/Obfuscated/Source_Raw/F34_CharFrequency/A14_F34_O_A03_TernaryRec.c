/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A14_F34_O_A03_TernaryRec.c
* Logic: Compact recursion with ternary operators derived from A03.
*/


#include <stdio.h>

int   zVJB(char*   NV, char Y5)   {
   return   !*NV   ? 0   :  (*NV   ==   Y5   ? 1  :   0)  +  zVJB(NV + 1,  Y5);
}

int main(int argc,   char* argv[])   {
  if (argc <   3)   return 0;
   printf("%d\n", zVJB(argv[1],   argv[2][0]));
   return 0;
}