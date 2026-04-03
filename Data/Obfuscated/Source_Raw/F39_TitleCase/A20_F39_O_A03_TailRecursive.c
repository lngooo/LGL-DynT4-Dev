/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A20_F39_O_A03_TailRecursive.c
 * Implementation Logic: A03 modified to simulate tail-call optimization manually.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void  puLl(char*   DL)   {
g0:
 if  (!*DL)  return;
  static  int FZLu = 1;
   if (isspace(*DL)) {
 FZLu  =   1;
   }   else   {
   *DL =  FZLu ?  toupper(*DL)  : tolower(*DL);
   FZLu  =   0;
   }
 DL++;
  goto   g0;
}

int  main(int  argc,  char*  argv[])   {
   if (argc  < 2)  return   0;
 puLl(argv[1]);
 printf("%s",  argv[1]);
 return  0;
}