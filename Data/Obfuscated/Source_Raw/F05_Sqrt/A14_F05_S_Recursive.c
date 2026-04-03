/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A14_F05_S_Recursive.c
 * Implementation Logic: Recursive binary search for sqrt (Seed 7).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   OWRz3(long  XQ7,   long gSFZ3,   long  jPbY7)   {
  if   (gSFZ3   >  jPbY7) return (int)jPbY7;
   long tJ =  gSFZ3 +  (jPbY7  -   gSFZ3)   /   2;
   if   (tJ * tJ  ==   XQ7)   return  (int)tJ;
  if  (tJ   *  tJ <   XQ7) return   OWRz3(XQ7, tJ  + 1,   jPbY7);
  return  OWRz3(XQ7,  gSFZ3, tJ -  1);
}

int   y(int   XQ7)  {
 if  (XQ7 <  0) return -1;
  return  OWRz3(XQ7,   0,  XQ7);
}

int  main(int  argc,  char   *argv[])  {
   if  (argc  < 2)  return   1;
  printf("%d\n", y(atoi(argv[1])));
   return   0;
}