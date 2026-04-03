/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A12_F36_O_A02_VarSplit.c
* Logic: Splitting the XOR operand 32 into x1 + x2 derived from A02.
*/


#include <stdio.h>

void  VZ(char* ReR)   {
   int  En7  =   16,  hqE  = 16;
   while (*ReR)  {
 char FTN =   *ReR;
   if   ((FTN   >=   'a'   &&  FTN   <=   'z')   ||  (FTN   >=   'A'  && FTN   <=  'Z')) {
  *ReR =   FTN   ^  (En7 +   hqE);
   }
 ReR++;
   }
}

int main(int   argc,   char*   argv[]) {
 if (argc  < 2)   return   0;
 VZ(argv[1]);
   printf("%s\n", argv[1]);
  return 0;
}