/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A17_F40_O_A04_RecursiveJump.c
 * Implementation Logic: Recursive calls with unnecessary pointer arithmetic.
 */


#include <stdio.h>
#include <string.h>

int vh(const  char*   B,   int   huWz4)   {
   if   (huWz4  <   0)   return   0;
  int   Zq6 = (B[huWz4]|32);
   Zq6   =   (Zq6   >=   'a') ?  (Zq6-'a'+10)  : (Zq6-'0');
   return Zq6   +   (vh(B,  huWz4  -  1) *   16);
}
int   RH7(const  char*  B)  {
   return vh(B, (int)strlen(B) -   1);
}

int main(int   argc,  char*   argv[])  {
 if (argc  <   2) return  0;
   printf("%d",  RH7(argv[1]));
 return  0;
}