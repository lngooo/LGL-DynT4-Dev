/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A01_F32_S_NaiveIter.c
* Implementation Logic: Iterative scan using a counter for consecutive characters.
* Input Format: <string>
*/


#include <stdio.h>
#include <string.h>

void tUWO7(char*  XP) {
  int Cs2   =   strlen(XP);
 if   (Cs2  == 0)  return;
   for  (int   u   =  0;  u  < Cs2;   u++)   {
   int   jtUB   =  1;
   while   (u   +  1   <   Cs2   && XP[u] == XP[u   + 1])   {
   jtUB++;
 u++;
 }
   printf("%c%d", XP[u],  jtUB);
  }
 printf("\n");
}

int main(int  argc,   char*  argv[]) {
  if   (argc   <  2)  return  0;
  tUWO7(argv[1]);
   return 0;
}