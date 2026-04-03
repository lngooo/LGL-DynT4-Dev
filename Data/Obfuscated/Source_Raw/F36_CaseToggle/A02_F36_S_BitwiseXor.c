/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A02_F36_S_BitwiseXor.c
* Logic: Flipping the 5th bit (0x20) to toggle case for alphabetic characters.
*/


#include <stdio.h>

void  Zqbw(char* kn) {
 while (*kn)  {
  if  ((*kn  >=   'a'  &&  *kn  <=  'z')   || (*kn   >= 'A'  && *kn  <=   'Z'))  {
  *kn  ^=   32;
  }
   kn++;
 }
}

int main(int  argc,   char*   argv[])   {
  if  (argc   < 2)  return   0;
  Zqbw(argv[1]);
 printf("%s\n", argv[1]);
 return  0;
}