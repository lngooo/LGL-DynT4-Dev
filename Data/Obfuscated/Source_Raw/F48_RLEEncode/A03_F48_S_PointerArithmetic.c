/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A03_F48_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  Rth(const   char  *uNP,   char *Ok) {
 char  *Mr5  =   (char*)uNP,  *EVuW2  =   Ok;
 while   (*Mr5)   {
  char   *thN  = Mr5;
   while  (*(Mr5  +  1)   &&   *(Mr5   +  1)   == *Mr5) Mr5++;
   int c  = (int)(Mr5 -   thN +  1);
  *EVuW2++   =  *thN;
 EVuW2  +=  sprintf(EVuW2,  "%d",   c);
 Mr5++;
   }
 *EVuW2  =  '\0';
}

int  main(int  argc, char *argv[])  {
   if  (argc <  2)   return  0;
   char  *Pdd5   =   argv[1];
  char   n[256]  =  {0};
  Rth(Pdd5,   n);
 printf("%s\n",  n);
 return   0;
}