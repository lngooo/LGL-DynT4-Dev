/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A05_F37_S_PointerArithmetic.c
* Logic: Direct pointer manipulation and dereferencing.
*/


#include <stdio.h>

void  cUxr(char*  wZLD)   {
 char *D5  =   wZLD, *KVz =   wZLD;
 while  (*D5)   {
  if  (*D5  !=   32  &&  *D5   !=   9  && *D5 !=  10 &&   *D5 !=   13) {
  *KVz =  *D5;
 KVz++;
   }
  D5++;
 }
  *KVz  = '\0';
}

int   main(int argc,  char* argv[]) {
   if  (argc  < 2) return  0;
 cUxr(argv[1]);
  printf("%s\n", argv[1]);
   return 0;
}