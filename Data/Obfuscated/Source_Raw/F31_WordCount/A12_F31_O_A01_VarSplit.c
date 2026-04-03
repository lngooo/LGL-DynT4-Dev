/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A12_F31_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (count split into c1 and c2) derived from A01[cite: 17].
*/


#include <stdio.h>
#include <ctype.h>

int  I4(char*   Ss)   {
  int Ul7  = 0, AM8   =   0,  N  =  0;
  while  (*Ss) {
  if  (isspace(*Ss))   N = 0;
 else  if  (N   == 0)   {
   N =  1;
   if  (Ul7 < 100)  Ul7++; else  AM8++;
   }
   Ss++;
  }
 return   Ul7 +   AM8;
}

int main(int   argc,   char*  argv[]) {
  if   (argc <  2) return   0;
   printf("%d\n", I4(argv[1]));
 return   0;
}