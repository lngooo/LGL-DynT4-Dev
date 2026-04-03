/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A21_F37_O_A01_ArithmeticShift.c
* Logic: Shifts non-spaces using arithmetic addressing derived from A01.
*/


#include <stdio.h>

void  itPh(char*   K9)   {
   int  d5  =  0, bNoS   = 0;
   for  (;  K9[d5]; d5++)   {
  char hN   =  K9[d5];
  int j =   (hN  == 32  ||   hN   == 9  ||   hN ==  10 ||   hN  ==   13);
  if  (!j)   {
 *(K9  + bNoS) =  hN;
 bNoS =  bNoS   +  1;
   }
   }
   *(K9   + bNoS)  = 0;
}

int  main(int argc, char* argv[])  {
   if (argc  <  2) return  0;
  itPh(argv[1]);
   printf("%s\n",   argv[1]);
 return 0;
}