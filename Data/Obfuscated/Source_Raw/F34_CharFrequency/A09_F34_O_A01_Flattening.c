/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A09_F34_O_A01_Flattening.c
* Logic: Control flow flattening via state variable derived from A01.
*/


#include <stdio.h>

int  c(char* dJ,  char AF)  {
   int  lIqq6  = 0,   G =  0, UL3   =   0;
   while (UL3   !=  -1)  {
   switch (UL3) {
  case   0: UL3  = (dJ[G]  !=   '\0')   ?  1  :  3;  break;
  case  1:  if (dJ[G] == AF) lIqq6++; UL3  =  2;   break;
   case   2:  G++;  UL3 =  0;  break;
  case 3:  UL3   =   -1; break;
 }
  }
  return lIqq6;
}

int   main(int argc,   char*  argv[])  {
 if   (argc  <   3)  return  0;
  printf("%d\n",  c(argv[1], argv[2][0]));
 return   0;
}