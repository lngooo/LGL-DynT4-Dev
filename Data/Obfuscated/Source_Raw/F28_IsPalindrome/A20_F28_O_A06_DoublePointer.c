/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A20_F28_O_A06_DoublePointer.c
 * Implementation Logic: DoublePointer derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int L(char *wphM8) {
  char **ak3  = &wphM8;
 int fJAi  =  0;  while   ((*ak3)[fJAi])  fJAi++;
   char   *Zjl = *ak3 +   fJAi  -  1;
 char *knS4  = *ak3;
  while(knS4   <  Zjl)   {
   if(*knS4  !=   *Zjl)  return 0;
 knS4++; Zjl--;
 }
   return   1;
}

int   main(int argc,   char *argv[]) {
   if  (argc <   2) return 1;
   char  *wphM8 = argv[1];
 int BYRH   =   L(wphM8);
  printf("%d\n",   BYRH);
 return   0;
}