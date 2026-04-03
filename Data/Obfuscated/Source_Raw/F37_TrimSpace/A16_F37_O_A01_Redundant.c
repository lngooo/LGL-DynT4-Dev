/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A16_F37_O_A01_Redundant.c
* Logic: Redundant mathematical noise in indexing derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void  Al(char*   QFDP) {
  int   YQdK  =  0,  mOjg1  =   0;
 while   (QFDP[YQdK])   {
   int   K =  YQdK   +  mOjg1;
   if   (!isspace((unsigned char)QFDP[YQdK])) {
 if (K   >= 0) {
  QFDP[mOjg1]   =   QFDP[YQdK];
 mOjg1  = mOjg1   +  1;
   }
 }
 YQdK   =  YQdK  +  1;
 }
  QFDP[mOjg1]  =  (char)0;
}

int main(int   argc, char* argv[])   {
  if  (argc  <  2)   return   0;
 Al(argv[1]);
  printf("%s\n", argv[1]);
  return   0;
}