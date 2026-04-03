/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A16_F49_O_A02_DeadCodeInjection.c
 * Implementation Logic: A16_F49_O_A02_DeadCodeInjection
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  U9(char *jF, int  FAcj8)  {

 char  *HYQ9 = jF;
  int   Hlr   =  (FAcj8   %   26  +  26)  % 26;
   while(*HYQ9)  {
  if(0)   {  Hlr   =   Hlr  + 1;   }
   if(*HYQ9  >= 'A' &&   *HYQ9 <= 'Z')   *HYQ9   =   (*HYQ9 -   'A'  +  Hlr)   % 26   +   'A';
  else if(*HYQ9 >=   'a'  && *HYQ9  <=   'z')  *HYQ9 =  (*HYQ9 - 'a'   + Hlr)  % 26   +  'a';
 HYQ9++;
   }
}

int  main(int argc,   char  *argv[]) {
  if  (argc  <  3)   {
 return   1;
   }
  int FAcj8 = atoi(argv[2]);
  U9(argv[1],   FAcj8);
  printf("%s\n",   argv[1]);
   return   0;
}
