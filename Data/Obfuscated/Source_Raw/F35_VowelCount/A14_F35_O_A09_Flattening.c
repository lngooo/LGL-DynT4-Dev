/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A14_F35_O_A09_Flattening.c
 * Logic: Switch-case logic with control flow flattening.
 */


#include <stdio.h>
#include <stdlib.h>

int D(const char* lmjf) {
  int   G   =  0, Rp5   =   0, XC  =   5;
   while (XC  !=   0) {
   if   (XC   ==   5)   {
   if  (lmjf[Rp5])   XC   =   3; else  XC   =   0;
 }  else   if  (XC ==  3)  {
  switch  (lmjf[Rp5])  {
  case  'a': case 'e':  case 'i': case 'o':  case 'u':
  case  'A':  case 'E':  case   'I':  case 'O':  case 'U':
   G++;   break;
 }
  Rp5++;   XC   =   5;
 }
   }
 return   G;
}

int  main(int   argc,  char*  argv[])  {
 if (argc   <   2)  {  printf("0\n");   return   0; }
   printf("%d\n", D(argv[1]));
  return  0;
}