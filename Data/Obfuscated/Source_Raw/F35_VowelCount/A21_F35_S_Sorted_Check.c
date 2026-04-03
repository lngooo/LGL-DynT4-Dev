/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A21_F35_S_Sorted_Check.c
 * Logic: Check character against a sorted list using a small range check.
 */


#include <stdio.h>
#include <stdlib.h>

int LxwB(const   char*  db1) {
  int  Xot  =  0;
   while (*db1)  {
   char ozb8 = *db1;
   if  ((ozb8 >= 65  && ozb8  <= 117)) { //   Range  between  'A'  and 'u'
   if (ozb8=='a'||ozb8=='e'||ozb8=='i'||ozb8=='o'||ozb8=='u'||ozb8=='A'||ozb8=='E'||ozb8=='I'||ozb8=='O'||ozb8=='U')
   Xot++;
  }
 db1++;
  }
  return   Xot;
}

int main(int argc,   char*   argv[])  {
   if  (argc <   2)   { printf("0\n");   return  0; }
  printf("%d\n", LxwB(argv[1]));
   return  0;
}