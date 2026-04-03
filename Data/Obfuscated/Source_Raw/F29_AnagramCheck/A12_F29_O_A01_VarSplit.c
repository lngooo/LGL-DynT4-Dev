/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A12_F29_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (i split into i1 and i2) derived from A01.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int  i(char*  sQJ8,  char*   U5)  {
  if  (strlen(sQJ8)  !=  strlen(U5))   return   0;
   int YIZc[256]  = {0};
  int  DhI = 0,  Gw   = 0;
  while(sQJ8[DhI])  {
 YIZc[(unsigned  char)sQJ8[DhI]]++;
 YIZc[(unsigned  char)U5[Gw]]--;
 DhI++; Gw++;
 }
  for  (int KHf2 =  0; KHf2   < 256;   KHf2++)  if   (YIZc[KHf2] != 0)  return 0;
   return  1;
}

int main(int argc, char* argv[]) {
 if  (argc  <   3)  return  0;
  printf("%d\n",  i(argv[1],  argv[2]));
   return  0;
}