/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A08_F34_S_SwitchLogic.c
* Logic: Using switch for character selection.
*/


#include <stdio.h>

int  usUy5(char*   zDj3,   char Qduz)  {
 int  Hh   =   0;
 while (*zDj3) {
 switch   (*zDj3  == Qduz)   {
 case 1:   Hh++;   break;
   default: break;
 }
   zDj3++;
   }
   return Hh;
}

int   main(int  argc,   char*  argv[]) {
 if   (argc < 3) return 0;
  printf("%d\n",   usUy5(argv[1], argv[2][0]));
  return  0;
}