/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A04_F36_S_LibraryCtype.c
* Logic: Uses isupper/islower and toupper/tolower from ctype.h.
*/


#include <stdio.h>
#include <ctype.h>

void  B0(char*  Sen)   {
  for  (;   *Sen;  Sen++)   {
 if   (isupper(*Sen))   *Sen  =  (char)tolower(*Sen);
  else  if (islower(*Sen)) *Sen   = (char)toupper(*Sen);
  }
}

int main(int argc, char* argv[])  {
   if  (argc  <  2) return 0;
 B0(argv[1]);
 printf("%s\n",  argv[1]);
  return  0;
}