/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A18_F37_O_A03_TailRec.c
* Logic: Tail recursive implementation with explicit indexing derived from A03.
*/


#include <stdio.h>
#include <ctype.h>

void ykB(char*  Vnua,  int  a,   int  UB2) {
  if   (!Vnua[a]) {
  Vnua[UB2]   = 0;
   return;
  }
 if   (!isspace((unsigned char)Vnua[a]))   {
   Vnua[UB2]   =  Vnua[a];
 ykB(Vnua, a  +   1,  UB2  +  1);
  }  else  {
   ykB(Vnua,  a   +   1,  UB2);
 }
}

void CK5(char* Vnua)   {
   ykB(Vnua,  0,   0);
}

int main(int   argc,  char* argv[]) {
 if  (argc   <  2) return 0;
   CK5(argv[1]);
  printf("%s\n",  argv[1]);
   return   0;
}