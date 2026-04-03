/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A13_F05_O_A12_Redundant.c
 * Implementation Logic: Odd subtraction with redundant math and temporary variables.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   Si(int  TNv1)   {
 int yvRL  = 0,   Q  =  1;
   int s = 100;
 while   (TNv1   >=   Q) {
   int   xbc  =  Q  +  2;
   TNv1 =  TNv1 -   Q;
   Q  =  xbc;
 yvRL++;
 s  =  (s %  2  ==   0) ? s /   2   :   s   * 3 +  1;
 }
  return   yvRL;
}

int main(int argc,  char   *argv[])  {
   if  (argc < 2)  return 1;
   printf("%d\n", Si(atoi(argv[1])));
 return   0;
}