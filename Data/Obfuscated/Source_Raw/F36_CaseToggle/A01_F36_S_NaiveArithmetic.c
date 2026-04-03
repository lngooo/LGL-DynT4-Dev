/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A01_F36_S_NaiveArithmetic.c
* Logic: Direct range checking and +/- 32 arithmetic.
*/


#include <stdio.h>

void   lnJz4(char* LE)  {
 for  (int  Ph  =   0; LE[Ph] !=  '\0'; Ph++) {
  if  (LE[Ph]  >=   'a'   &&   LE[Ph]  <= 'z') LE[Ph]   -= 32;
   else  if  (LE[Ph] >=   'A'  &&  LE[Ph]  <=   'Z')  LE[Ph]  +=   32;
   }
}

int main(int  argc, char*  argv[])  {
   if   (argc   <  2) return 0;
  lnJz4(argv[1]);
 printf("%s\n",  argv[1]);
   return 0;
}