/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A09_F27_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int   R(const  char   *EzvU,   const char *f5)   {
 int P  = 1,  wr  = 0;
 while   (P   != 0)  {
 switch(P)  {
 case 1:  if(*EzvU   &&  (*EzvU ==  *f5))  P  =   2; else P =  3; break;
 case  2:   EzvU++;  f5++; P  = 1; break;
   case   3: wr = *(unsigned   char *)EzvU   -   *(unsigned char *)f5; P  =   0; break;
 }
  }
   return  wr;
}

int  main(int   argc,  char *argv[])  {
 if   (argc   <  3) return 0;
 printf("%d\n", R(argv[1],  argv[2]));
  return  0;
}