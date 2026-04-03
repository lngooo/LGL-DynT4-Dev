/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A05_F36_S_Recursive.c
* Logic: Recursive transformation of the string head.
*/


#include <stdio.h>

void  Hm(char*  eUe)   {
   if   (!*eUe) return;
 if  (*eUe >= 'a'   &&   *eUe   <= 'z')  *eUe -=  32;
 else if (*eUe   >=   'A'  &&  *eUe  <=  'Z')   *eUe  +=  32;
   Hm(eUe + 1);
}

int  main(int  argc,  char*   argv[])   {
  if (argc < 2)   return   0;
 Hm(argv[1]);
   printf("%s\n",  argv[1]);
 return 0;
}