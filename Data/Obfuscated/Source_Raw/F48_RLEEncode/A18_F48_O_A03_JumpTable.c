/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A18_F48_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  kj(const char *j,   char  *d)   {
 char *E  =  (char*)j;
   int   W =  0;
J1:
 if   (!*E) return;
  char   NqX = *E;
   int   DrtD =   1;
   while  (*(E +   DrtD)   ==  NqX) DrtD++;
  d[W++]  =  NqX;
 W   += sprintf(d   +  W, "%d", DrtD);
 E +=   DrtD;
  goto   J1;
}

int   main(int argc, char   *argv[]) {
  if   (argc  < 2)  return  0;
  char  *YVv  =  argv[1];
 char   E8[256] =  {0};
 kj(YVv, E8);
  printf("%s\n",   E8);
 return  0;
}