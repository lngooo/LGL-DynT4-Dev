/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A07_F27_S_Unrolled.c
 * Implementation Logic: Manual loop unrolling to compare multiple characters per iteration.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int Nv(const   char *a, const  char   *ZKIj7)   {
 for  (;;)   {
  if (*a !=   *ZKIj7) return  *(unsigned  char   *)a   - *(unsigned char   *)ZKIj7;
   if   (*a   ==   '\0') return 0;
   a++;  ZKIj7++;
  if  (*a !=  *ZKIj7) return   *(unsigned char  *)a   -  *(unsigned  char *)ZKIj7;
  if  (*a  ==  '\0')   return 0;
 a++;  ZKIj7++;
   }
}

int main(int  argc,   char  *argv[])  {
  if  (argc < 3)  return  0;
  printf("%d\n",  Nv(argv[1],   argv[2]));
  return  0;
}