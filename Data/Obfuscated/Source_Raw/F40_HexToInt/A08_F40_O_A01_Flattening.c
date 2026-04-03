/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A08_F40_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening of A01.
 */


#include <stdio.h>

int  a(const  char* Of1) {
 int  HFLM  =  0, n2  = 1;
   while (n2 !=  0) {
   switch(n2)   {
   case   1: if  (!*Of1) n2   =  0;  else   n2 =   2;   break;
   case 2:  {
 int  fXV5   =   0;   char   A   =   *Of1;
 if   (A  >=   '0'  &&  A <=   '9')   fXV5  =  A   -  '0';
   else fXV5   = (A  | 32)   -   'a' +  10;
 HFLM   = HFLM  * 16  + fXV5;
   Of1++;  n2   = 1;
   break;
 }
  }
   }
   return HFLM;
}

int   main(int   argc,  char*   argv[]) {
 if   (argc  <  2)  return   0;
   printf("%d", a(argv[1]));
  return   0;
}