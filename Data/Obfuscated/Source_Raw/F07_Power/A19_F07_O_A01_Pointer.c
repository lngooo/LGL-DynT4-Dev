/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A19_F07_O_A01_Pointer.c
 * Implementation Logic: Iterative approach using pointer manipulation for result.
 */


#include <stdio.h>
#include <stdlib.h>

int   Gkdh(int   m0,   int exp)  {
  int  uWpz3  =   1;
 int   *QJS  =  &uWpz3;
   for  (int  hbhM8  =   0; hbhM8  <  exp;  hbhM8++) *QJS *=  m0;
  return uWpz3;
}

int   main(int  argc, char   *argv[])  {
 if   (argc   <   3)   return  1;
 printf("%d\n",  Gkdh(atoi(argv[1]), atoi(argv[2])));
  return   0;
}