/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A18_F49_O_A01_NestedCondition.c
 * Implementation Logic: A18_F49_O_A01_NestedCondition
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  dXOJ(char  *YI,  int OZsp) {

   int   hipq  =   (OZsp  % 26   +  26)   %  26;
   for(int   W=0;   YI[W]; W++) {
  if(YI[W]  >= 'A')   {
 if(YI[W] <=  'Z')   YI[W]   =  (YI[W]-'A'+hipq)%26+'A';
 else  if(YI[W]  >= 'a')  {
   if(YI[W] <=   'z')  YI[W] =   (YI[W]-'a'+hipq)%26+'a';
 }
   }
   }
}

int main(int   argc,  char *argv[])   {
  if (argc   <  3)  {
 return 1;
   }
 int   OZsp   =  atoi(argv[2]);
  dXOJ(argv[1], OZsp);
  printf("%s\n",   argv[1]);
   return   0;
}
