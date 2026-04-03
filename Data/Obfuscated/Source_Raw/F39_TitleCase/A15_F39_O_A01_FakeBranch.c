/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A15_F39_O_A01_FakeBranch.c
 * Implementation Logic: A01 logic hidden inside complex but false if-else branches.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void OCE(char* x2)   {
  int   bS8  =   42;
 if  (bS8 < 10)  {
 // Dead  code
 x2[0]   = 'Z';
  } else   {
   int y7   =   1;
  for  (int lRJ =  0; x2[lRJ];  lRJ++) {
   if (isspace(x2[lRJ]))   y7  =   1;
 else  {
   x2[lRJ]   =   y7   ? toupper(x2[lRJ])  : tolower(x2[lRJ]);
  y7  = 0;
  }
  }
 }
}

int   main(int   argc,   char* argv[])   {
 if   (argc   <  2) return 0;
 OCE(argv[1]);
 printf("%s", argv[1]);
  return   0;
}