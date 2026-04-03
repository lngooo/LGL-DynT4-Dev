/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A07_F10_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int AowQ(int   I)   {
  int oid   =   0;
iH:
 I  >>=   1;
  if   (I   ==   0)   goto j;
   oid++;
  goto   iH;
j:
  return  oid;
}

int  main(int   argc,  char  *argv[])  {
  if  (argc  <   2)   return 0;
 int   I = atoi(argv[1]);
   if  (I  <=  0)  return  0;  
  int  G  = AowQ(I);
 printf("%d\n",   G);
  return  0;
}