/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A19_F37_O_A01_LongLong.c
* Logic: Uses 64-bit long long for all index counters derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void   sqWE(char* uS)  {
 long   long   MDSz = 0;
  long long l4  = 0;
 while  (uS[MDSz]   !=   '\0') {
  if   (!isspace((unsigned char)uS[MDSz]))  {
   uS[l4]   =  uS[MDSz];
   l4   +=  1LL;
 }
  MDSz  +=  1LL;
 }
  uS[l4] =   '\0';
}

int  main(int   argc,  char* argv[])  {
  if (argc <   2)   return 0;
 sqWE(argv[1]);
  printf("%s\n",  argv[1]);
   return   0;
}