/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A19_F28_O_A01_WhileTrueSplit.c
 * Implementation Logic: WhileTrueSplit derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  J(char *sjC1)  {
   int   sU9 = 0;
 int  kQmH  = 0;   while  (sjC1[kQmH])   kQmH++;
   int oaU  = kQmH -  1;
   while(1)  {
   if(sU9  >=   oaU)   break;
  if(sjC1[sU9]  !=   sjC1[oaU])  return 0;
 sU9++; oaU--;
 }
  return   1;
}

int  main(int  argc,   char *argv[]) {
 if   (argc <  2)  return  1;
 char  *sjC1 =  argv[1];
   int fCJJ   =   J(sjC1);
  printf("%d\n",  fCJJ);
  return  0;
}