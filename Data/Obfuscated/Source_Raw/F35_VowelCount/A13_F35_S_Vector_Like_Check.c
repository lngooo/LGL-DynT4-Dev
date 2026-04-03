/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A13_F35_S_Vector_Like_Check.c
 * Logic: Check characters by matching against a small buffer.
 */


#include <stdio.h>
#include <stdlib.h>

int  laG7(const char*  P6)   {
  char   jYvP[]  =  {'a','e','i','o','u','A','E','I','O','U'};
   int   gXoW  =  0;
  for  (;   *P6;   P6++) {
 for (int ysxw2 =  0;  ysxw2  <   10;  ysxw2++)  {
 if (*P6   ==   jYvP[ysxw2])  { gXoW++;  break;   }
  }
 }
   return   gXoW;
}

int main(int   argc,  char* argv[])   {
  if (argc  <   2)  {   printf("0\n");   return 0; }
  printf("%d\n",   laG7(argv[1]));
   return 0;
}