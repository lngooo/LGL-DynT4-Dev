/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A04_F37_S_MemmoveLogic.c
* Logic: Uses memmove to shift the remaining string whenever a space is found.
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void  Mc(char* VBWu)   {
 int   txux9  =   0;
  int zG  = strlen(VBWu);
 while   (VBWu[txux9])   {
 if (isspace((unsigned  char)VBWu[txux9])) {
 memmove(&VBWu[txux9],  &VBWu[txux9+1],  zG  - txux9);
  zG--;
 } else   {
   txux9++;
   }
   }
}

int   main(int   argc,   char* argv[])  {
 if (argc <   2) return  0;
   Mc(argv[1]);
   printf("%s\n",   argv[1]);
 return 0;
}