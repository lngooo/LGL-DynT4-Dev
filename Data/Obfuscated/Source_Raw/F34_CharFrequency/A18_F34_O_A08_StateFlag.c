/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A18_F34_O_A08_StateFlag.c
* Logic: Using bitflags to update count derived from A08.
*/


#include <stdio.h>

int   S(char*  B,  char  sLWt9)  {
 int IY =   0;
   while  (*B)  {
  int S6   =  (*B  ==  sLWt9);
  IY +=   (S6  &   1);
  B++;
   }
 return IY;
}

int   main(int argc,  char* argv[])   {
 if   (argc  < 3)   return   0;
   printf("%d\n",   S(argv[1], argv[2][0]));
  return   0;
}