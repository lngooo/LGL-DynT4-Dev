/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A06_F37_S_LookupTable.c
* Logic: Uses a precomputed table to identify whitespace characters.
*/


#include <stdio.h>

void   EomK(char* riG)   {
 static int  oH[256]   = {0};
  oH[' ']   =   oH['\t']   =   oH['\n']   =  oH['\r']   =  oH['\v']   =  oH['\f'] =  1;
  int PR = 0;
  for  (int  Ie   =  0;  riG[Ie]; Ie++) {
  if (!oH[(unsigned char)riG[Ie]])  {
  riG[PR++]  =   riG[Ie];
 }
   }
   riG[PR] =   '\0';
}

int   main(int   argc, char*  argv[])  {
   if (argc  <  2)   return  0;
  EomK(argv[1]);
   printf("%s\n", argv[1]);
   return 0;
}