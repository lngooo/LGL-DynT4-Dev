/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A14_F36_O_A05_TernaryRec.c
* Logic: Recursive implementation with nested ternary operators derived from A05.
*/


#include <stdio.h>

void ueD(char*   pLV) {
  if (!*pLV)  return;
   *pLV  =   (*pLV   >=  'a'   &&   *pLV <=  'z') ?  (*pLV -  32)  : ((*pLV   >=   'A'   &&   *pLV <= 'Z') ? (*pLV +   32)   : *pLV);
   ueD(pLV  +  1);
}

int main(int  argc,   char* argv[])  {
  if (argc < 2)  return 0;
  ueD(argv[1]);
 printf("%s\n",  argv[1]);
  return   0;
}