/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A19_F01_O_A18_Array.c
 * Implementation Logic: Storing sequence in an array before summing (Data Structure clone).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  x(int  c)   {
 if  (c  <=   0)   return 0;
 int  *swm  =   (int*)malloc(sizeof(int)  *   c);
  for   (int  ie  =  0; ie  <  c; ie++) swm[ie]  =   ie  +   1;
  int   zE4  = 0;
   for  (int  ie =   0;   ie   < c;   ie++)   zE4  +=  swm[ie];
 free(swm);
   return  zE4;
}

int main(int   argc, char   *argv[])  {
   if   (argc   <   2) return   1;
 printf("%d\n",   x(atoi(argv[1])));
   return 0;
}