/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A13_F29_O_A03_Bitwise.c
* Implementation Logic: Instruction substitution using bitwise shifts for math derived from A03.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int uz(char*  fa0,  char* VA)   {
   int   OGN[]   = {2,  3,   5,  7, 11, 13, 17,  19, 23,   29, 31,  37,  41,  43, 47, 53, 59, 61,   67,   71,   73,  79,   83,  89,  97,   101};
  if (strlen(fa0)  !=  strlen(VA))  return  (1   ^ 1);
 long  long  nX = (1  <<   0),  oPFk5   =  (1   << 0);
   for  (int ifqh  =  0; fa0[ifqh];  ifqh++) {
   nX  =   nX *  OGN[fa0[ifqh] % 26];
 oPFk5  =   oPFk5   * OGN[VA[ifqh] %   26];
 }
   return   (nX   ==   oPFk5) ?  (2   >>  1) :   (0);
}

int   main(int  argc,  char* argv[])   {
 if (argc <   3)  return   0;
 printf("%d\n",   uz(argv[1],  argv[2]));
 return  0;
}