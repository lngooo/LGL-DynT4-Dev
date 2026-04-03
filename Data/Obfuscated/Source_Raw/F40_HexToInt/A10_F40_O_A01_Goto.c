/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A10_F40_O_A01_Goto.c
 * Implementation Logic: Loop decomposition using goto labels.
 */


#include <stdio.h>

int   gYNX(const char*  W)  {
  int e =  0;
sH:
  if   (!*W)  goto z;
 int   S6  = 0;
 if (*W >=   '0'  &&   *W <=   '9')  S6 = *W - '0';
  else  S6  = (*W  | 32) -   'a'   +   10;
  e   =   e   * 16  +   S6;
  W++;
   goto   sH;
z:
  return  e;
}

int   main(int argc,  char*   argv[])   {
  if  (argc   <   2)   return   0;
 printf("%d",  gYNX(argv[1]));
 return  0;
}