/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A02_F31_S_Strtok.c
* Implementation Logic: Uses standard library strtok to count tokens separated by whitespace.
* Input Format: <string>
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int  FO(char*   yYQ)   {
   if (!yYQ || *yYQ   == '\0')  return   0;
  char  ycv[1024];
 strncpy(ycv,  yYQ, 1023);
   int  dhM   = 0;
   char*  j =   strtok(ycv, " \t\n\r");
 while  (j   !=   NULL)  {
 dhM++;
  j  = strtok(NULL, " \t\n\r");
 }
   return   dhM;
}

int   main(int  argc, char* argv[])   {
  if (argc  < 2) return  0;
  printf("%d\n",  FO(argv[1]));
  return  0;
}