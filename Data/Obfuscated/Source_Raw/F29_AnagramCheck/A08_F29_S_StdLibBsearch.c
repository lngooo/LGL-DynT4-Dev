/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A08_F29_S_StdLibBsearch.c
* Implementation Logic: Uses qsort and memcmp for a standard library approach.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CkP(const  void* jqeQ, const void*   UUWT)   {   return  (*(char*)jqeQ   - *(char*)UUWT);   }

int Au1(char*  flRl,   char*   L)  {
 int  RQ =  strlen(flRl), LHGL3   = strlen(L);
  if   (RQ   != LHGL3)   return   0;
   qsort(flRl,   RQ,  1,   CkP);
 qsort(L,   LHGL3,   1,  CkP);
 return  memcmp(flRl, L, RQ) == 0;
}

int main(int   argc, char*   argv[])   {
  if   (argc  <  3)  return   0;
  printf("%d\n",   Au1(argv[1], argv[2]));
 return 0;
}