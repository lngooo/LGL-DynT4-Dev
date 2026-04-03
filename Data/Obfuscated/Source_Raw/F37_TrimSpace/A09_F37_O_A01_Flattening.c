/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A09_F37_O_A01_Flattening.c
* Logic: Control flow flattening with state machine derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void  U(char* u) {
  int CUoT = 0,  GmQi   =   0, an  = 0;
   while   (an  != -1) {
 switch   (an)  {
   case 0: an   =   (u[CUoT]  ==  0) ? 3 : 1;   break;
 case   1:   if   (!isspace((unsigned  char)u[CUoT])) {   u[GmQi]   =  u[CUoT];  GmQi++;  }  an   =   2;  break;
   case  2:  CUoT++;   an  =   0;   break;
   case   3: u[GmQi]  = 0; an = -1; break;
   }
 }
}

int   main(int  argc,  char* argv[])   {
 if (argc <   2)  return   0;
 U(argv[1]);
 printf("%s\n", argv[1]);
 return 0;
}