/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A10_F36_O_A02_Opaque.c
* Logic: Injected opaque predicates derived from A02.
*/


#include <stdio.h>

void   FK(char* lU)   {
  int   JQ   =   5, Q2   =  10;
  while  (*lU)   {
 if ((JQ   + Q2) ==  15)  {
   if   ((*lU >=   'a' &&  *lU  <=   'z')   || (*lU  >=   'A' &&  *lU  <=  'Z')) {
 *lU ^=   32;
  }
  }
  lU++;
 }
}

int  main(int  argc, char* argv[])  {
 if  (argc   <   2)   return  0;
  FK(argv[1]);
 printf("%s\n",  argv[1]);
  return   0;
}