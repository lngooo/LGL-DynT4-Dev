/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A14_F29_O_A05_Redundant.c
* Implementation Logic: Introduction of redundant calculations derived from A05.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int wrIW(char*   lpUB,  char*   b9)  {
 if   (strlen(lpUB)  !=   strlen(b9))   return  0;
  int  xIT3 =   0,  OWHu  = 0;
  for (int  VK =  0; lpUB[VK]; VK++)  {
  int  C =  (xIT3 +   5)   *  2;
 xIT3   ^= lpUB[VK];   xIT3 ^=   b9[VK];
   OWHu += lpUB[VK]; OWHu  -=  b9[VK];
 if(C   <   0) xIT3++; 
   }
  return   (xIT3 ==  0  &&   OWHu   ==   0);
}

int   main(int   argc,   char*   argv[])   {
  if (argc   < 3)  return  0;
   printf("%d\n", wrIW(argv[1],  argv[2]));
  return  0;
}