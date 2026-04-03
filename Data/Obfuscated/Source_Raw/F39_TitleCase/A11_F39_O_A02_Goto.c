/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A11_F39_O_A02_Goto.c
 * Implementation Logic: Pointer-based implementation of A02 using goto labels for control flow.
 * Input Format: <string>
 */


#include <stdio.h>

void   bGO(char* PHS0)  {
   char* dl =  PHS0;
  int ObQ   =   1;
MRlo:
 if   (!*dl)  return;
 if (*dl  ==  ' ')  {  ObQ  = 1;   goto  P2;  }
 if (ObQ)  {   if(*dl  >=   'a')   *dl   -=  32;   ObQ   =   0;   }
   else  {  if(*dl   <= 'Z'  &&   *dl   >=   'A')   *dl +=  32;   }
P2:
 dl++;
  goto   MRlo;
}

int  main(int  argc,   char* argv[])   {
   if  (argc   < 2)  return   0;
 bGO(argv[1]);
  printf("%s",  argv[1]);
   return 0;
}