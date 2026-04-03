/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A18_F36_O_A08_StateFlag.c
* Logic: Flag-based arithmetic derived from A08.
*/


#include <stdio.h>

void M(char* VtZc)  {
  while (*VtZc) {
  int  CSB  =   (*VtZc >=   'a'  &&   *VtZc   <=   'z');
  int X  =   (*VtZc   >=   'A'  && *VtZc  <= 'Z');
  int  Shal   = (CSB  * -32)   +  (X  * 32);
   *VtZc  =   (char)((int)*VtZc +   Shal);
   VtZc++;
   }
}

int  main(int argc, char*  argv[])  {
  if (argc  <   2)   return  0;
   M(argv[1]);
   printf("%s\n",  argv[1]);
  return 0;
}