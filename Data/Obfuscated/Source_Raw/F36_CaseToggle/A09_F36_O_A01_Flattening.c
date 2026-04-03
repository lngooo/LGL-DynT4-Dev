/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A09_F36_O_A01_Flattening.c
* Logic: Control flow flattening using a state machine derived from A01.
*/


#include <stdio.h>

void   mpEm6(char* nE) {
 int   YYQE = 0, oIwk =   0;
  while (oIwk   !=   -1)   {
  switch (oIwk)   {
   case 0: oIwk  = (nE[YYQE]  ==   0) ?   -1 :  1; break;
 case 1:   
 if (nE[YYQE]   >= 'a'   &&   nE[YYQE]  <=  'z')   nE[YYQE]  -=   32;
   else   if  (nE[YYQE]  >= 'A'   &&   nE[YYQE]  <= 'Z') nE[YYQE]   +=   32;
  oIwk   =   2;  break;
 case  2: YYQE++;  oIwk  =   0; break;
 }
 }
}

int main(int   argc, char*  argv[])   {
   if (argc   < 2) return 0;
 mpEm6(argv[1]);
  printf("%s\n",  argv[1]);
  return  0;
}