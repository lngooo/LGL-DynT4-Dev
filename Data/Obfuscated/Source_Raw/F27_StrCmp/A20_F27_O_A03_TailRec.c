/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A20_F27_O_A03_TailRec.c
 * Implementation Logic: Tail-recursive wrapper for recursion in A03.
 */


#include <stdio.h>
#include <stdlib.h>

int qH3(const  char *qa, const char *i)   {
 return (*qa ==   '\0'  ||  *qa  !=  *i)   ?   (*(unsigned char*)qa  -   *(unsigned  char*)i)   :  qH3(qa+1, i+1);
}

int   KO(const  char *qa, const   char *i) {
   return qH3(qa, i);
}

int  main(int  argc,   char   *argv[]) {
  if  (argc   < 3)   return 0;
   printf("%d\n",  KO(argv[1], argv[2]));
   return 0;
}