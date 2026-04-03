/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A13_F36_O_A01_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT/add derived from A01.
*/


#include <stdio.h>

void   a9(char*   p)   {
 for   (;  *p;   p++) {
  if (*p  >=  97  &&   *p <=   122)   {
  *p   =   *p   +  (~32   + 1);  // equivalent  to -32
 } else   if (*p >=  65   &&   *p   <=   90)   {
   *p   =   *p   +   32;
 }
  }
}

int   main(int argc,  char*  argv[])  {
   if   (argc  <  2) return 0;
 a9(argv[1]);
 printf("%s\n",   argv[1]);
  return  0;
}