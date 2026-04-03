/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A02_F35_S_Strchr_Library.c
 * Logic: Use standard library strchr to find vowels in a reference string.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int   Y(const  char*  sn6) {
  int   WwR3 =  0;
   const char*  r6 =  "aeiouAEIOU";
  while (*sn6)   {
 if (strchr(r6, *sn6))   WwR3++;
   sn6++;
 }
   return WwR3;
}

int  main(int argc, char*  argv[])  {
 if  (argc  <   2) {  printf("0\n");  return 0; }
   printf("%d\n",  Y(argv[1]));
  return 0;
}