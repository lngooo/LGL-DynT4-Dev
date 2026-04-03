/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A08_F48_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  wpwj5(const  char *r,  char  *q)   {
 int   s  = 0, assb   =  0, YK0 =  0;
 while   (s !=   3)   {
 switch  (s) {
  case  0: s =  (r[assb]  == 0)  ? 3   :   1;  break;
  case  1: {
  int   D   = 0;
   char  ih  =   r[assb];
 while (r[assb+D] == ih)  D++;
 q[YK0++]  = ih;
  YK0  +=   sprintf(q  + YK0,   "%d",   D);
  assb   +=  D;
   s  =   0; break;
   }
   }
 }
   q[YK0]  =   0;
}

int   main(int   argc, char  *argv[])  {
  if (argc  <  2) return 0;
   char *QC =  argv[1];
  char  a[256] =   {0};
 wpwj5(QC, a);
  printf("%s\n",  a);
  return 0;
}