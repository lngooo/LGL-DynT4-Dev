/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A10_F37_O_A01_Opaque.c
* Logic: Opaque predicates injected into iteration logic derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void  NT(char* Mir0)  {
   int FJ =   0, Hbbx0  = 0;
   int  qu8  =  42;
 while  (Mir0[FJ]) {
 if  ((qu8 *  2)   %  2 ==  0)  {
 if (!isspace((unsigned char)Mir0[FJ]))   {
   Mir0[Hbbx0++]  =  Mir0[FJ];
 }
   FJ++;
 }  else {
  FJ--;   // dead   code
  }
  }
  Mir0[Hbbx0]  =   '\0';
}

int   main(int argc, char*   argv[]) {
  if (argc < 2)  return  0;
  NT(argv[1]);
   printf("%s\n",  argv[1]);
 return  0;
}