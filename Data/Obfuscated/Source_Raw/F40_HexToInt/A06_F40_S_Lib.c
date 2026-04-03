/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A06_F40_S_Lib.c
 * Implementation Logic: Uses sscanf with %x format specifier.
 * Input Format: <hex_string>
 */


#include <stdio.h>

int  M(const   char* NbW) {
 int  vkH   = 0;
   sscanf(NbW, "%x",  &vkH);
   return vkH;
}

int  main(int   argc,  char*  argv[])  {
  if (argc  <   2)   return   0;
  printf("%d",  M(argv[1]));
 return 0;
}