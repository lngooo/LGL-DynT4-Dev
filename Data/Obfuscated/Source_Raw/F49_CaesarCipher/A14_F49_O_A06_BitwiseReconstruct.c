/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A14_F49_O_A06_BitwiseReconstruct.c
 * Implementation Logic: A14_F49_O_A06_BitwiseReconstruct
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   sEUj9(char   *o, int Zy)  {

   int   umlS =   (Zy %   26  +   26)  %  26;
   for(int E=0;   o[E]; E++) {
   if(((o[E]   >=  'a')   &   (o[E] <=   'z'))  | ((o[E]   >= 'A') & (o[E]  <= 'Z')))   {
 char  kPCh7   = (o[E] &  0x20)  ? 0x61  :   0x41;
   o[E]   =   (char)((((o[E]  -   kPCh7)   +  umlS)   % 26) + kPCh7);
 }
  }
}

int  main(int  argc,  char *argv[])   {
   if  (argc  < 3)   {
  return   1;
  }
   int   Zy  =   atoi(argv[2]);
   sEUj9(argv[1],  Zy);
 printf("%s\n", argv[1]);
 return   0;
}
