/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A08_F36_S_Branchless.c
* Logic: Simulated branchless logic using boolean evaluation results as multipliers.
*/


#include <stdio.h>

void bhZW7(char* TY8)   {
 while  (*TY8)  {
   int F  =   (*TY8  >=   'a'  &&   *TY8 <= 'z');
   int   KOHF  = (*TY8 >= 'A' && *TY8 <=   'Z');
 *TY8  = *TY8 - (F  * 32) +  (KOHF  *   32);
   TY8++;
   }
}

int main(int   argc,   char* argv[])   {
   if (argc   <  2) return 0;
  bhZW7(argv[1]);
 printf("%s\n",   argv[1]);
   return  0;
}