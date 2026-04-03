/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A13_F34_O_A05_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT and AND derived from A05.
*/


#include <stdio.h>

int   xfwX(char*   Btuz, char w)  {
 int   Iszc2  =   0;
 while   (*Btuz)  {
 //  Equivalent to *s  ==  c
 int  Z1   =   *Btuz ^   w;
  if (!Z1)  {
  Iszc2   =  -~Iszc2;   // count++
  }
   Btuz  = (char*)((size_t)Btuz  +  1);
   }
  return   Iszc2;
}

int main(int argc, char*  argv[]) {
 if   (argc  <   3)  return 0;
  printf("%d\n", xfwX(argv[1], argv[2][0]));
  return  0;
}