/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A11_F29_O_A05_Goto.c
* Implementation Logic: Deconstruction of loops into goto-labels derived from A05.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int   hpQ(char*   NG, char* jkTk2) {
   if (strlen(NG)   !=  strlen(jkTk2))   return  0;
   int   zq2   = 0,  Ypis   =   0, nD3  = 0;
p5:
   if   (!NG[nD3])   goto   PQ;
 zq2  ^= NG[nD3];  zq2   ^=  jkTk2[nD3];
   Ypis +=   NG[nD3];   Ypis  -=   jkTk2[nD3];
  nD3++;
  goto p5;
PQ:
   return   (zq2 ==   0 && Ypis  == 0);
}

int  main(int argc, char*   argv[])  {
  if (argc < 3)  return  0;
  printf("%d\n", hpQ(argv[1],   argv[2]));
 return  0;
}