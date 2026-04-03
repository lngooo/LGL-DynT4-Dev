/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A04_F40_S_Recursive.c
 * Implementation Logic: Converts hex recursively by processing the tail of the string.
 * Input Format: <hex_string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>

int  Hn(const  char*  dmlb3,   int LIyZ)  {
 if  (LIyZ  == 0) return   0;
   char  TLWH   =  dmlb3[LIyZ-1];
 int   v  = (TLWH  >=   'a') ? (TLWH  -  'a'  +  10)   :  ((TLWH  >=   'A') ?  (TLWH -  'A'  +   10)   : (TLWH  - '0'));
  return  v   + 16   *   Hn(dmlb3,   LIyZ  -   1);
}

int ne(const char* dmlb3)  {
 return   Hn(dmlb3,   (int)strlen(dmlb3));
}

int main(int   argc, char*  argv[]) {
 if  (argc < 2)  return  0;
 printf("%d", ne(argv[1]));
 return 0;
}