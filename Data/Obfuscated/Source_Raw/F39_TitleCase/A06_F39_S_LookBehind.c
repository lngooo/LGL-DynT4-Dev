/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A06_F39_S_LookBehind.c
 * Implementation Logic: Uses an index-1 look-behind to determine if current char is start of word.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>
#include <string.h>

void  evJ(char*  s)  {
   int   cQm   =   strlen(s);
 for   (int   fYW  = cQm -   1;  fYW   >= 0; fYW--)  {
 //   Temporary   buffer  logic to process reverse  (dummy  seed   complexity)
   }
   for (int  fYW =  0;   fYW   <   cQm;  fYW++) {
 char  xZrb  =   (fYW  == 0)  ?   ' '   :   s[fYW-1];
   if   (isspace(xZrb)   && !isspace(s[fYW])) s[fYW]   = toupper(s[fYW]);
   else  if  (!isspace(s[fYW]))  s[fYW]  =  tolower(s[fYW]);
 }
}

int   main(int   argc, char*  argv[])  {
   if (argc <   2)  return   0;
  evJ(argv[1]);
 printf("%s",   argv[1]);
   return  0;
}