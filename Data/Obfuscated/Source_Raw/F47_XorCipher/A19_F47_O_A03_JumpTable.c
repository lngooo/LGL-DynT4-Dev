/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A19_F47_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   W4(char *xtl, char  *s)   {
   int   aQyA  =   0;  while(s[aQyA])  aQyA++;
  for(int   en=0;  xtl[en];   en++)  {
 int kaL2   =   1;
   if(kaL2) xtl[en]   ^=   s[en   %  aQyA];
  }
}

int  main(int   argc,   char   *argv[])   {
 if   (argc   <  3)   return  0;
   char *xtl = argv[1];
   char   *s =  argv[2];
 int   rhq  =  0;
   while  (xtl[rhq])  rhq++;

  W4(xtl,  s);

  for (int   en =  0;   en   <   rhq;  en++) {
  printf("%02x", (unsigned  char)xtl[en]);
  }
   printf("\n");
  return   0;
}