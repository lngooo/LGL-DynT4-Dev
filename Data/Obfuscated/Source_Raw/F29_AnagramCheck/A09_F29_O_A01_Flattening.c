/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A09_F29_O_A01_Flattening.c
* Implementation Logic: Control-flow flattening using switch-case derived from A01.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int   H3(char*   NXJ, char*  xt2) {
 int  udj  = 0,   n2[256]   =  {0},   f7 = 0;
   while (udj   !=   -1)   {
 switch (udj)  {
 case  0:   udj   =   (strlen(NXJ)  != strlen(xt2)) ? 4  :  1; break;
   case 1:   if  (NXJ[f7])  { n2[(unsigned char)NXJ[f7]]++;  n2[(unsigned  char)xt2[f7]]--; f7++;   }  else udj =   2; break;
  case 2:   f7   = 0; udj =  3;   break;
 case  3:   if  (f7   < 256)   { if  (n2[f7] !=   0) return 0; f7++;   }  else   udj  = 5;   break;
   case   4:  return  0;
   case  5:   return   1;
   }
  }
 return 0;
}

int  main(int argc,   char*   argv[])   {
 if   (argc <  3)  return 0;
 printf("%d\n",   H3(argv[1],  argv[2]));
   return 0;
}