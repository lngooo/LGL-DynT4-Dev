/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A03_F29_S_PrimeProduct.c
* Implementation Logic: Maps each char to a prime number; strings are anagrams if their products are equal.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int djh6(char*   s, char*   Nc)  {
  int  hruL[] =  {2,  3,   5,   7,  11,   13, 17,   19,   23,  29,  31,   37, 41, 43,  47,  53,   59,  61,   67,  71,  73,  79,   83,   89,  97, 101};
   if (strlen(s)  !=   strlen(Nc))  return  0;
 long   long emXA = 1,   dqfR9  = 1;
   for   (int   ztp = 0;  s[ztp];   ztp++) {
 emXA   *=   hruL[s[ztp]   %  26];
 dqfR9   *=  hruL[Nc[ztp]   %  26];
   }
  return (int)(emXA   == dqfR9);
}

int  main(int   argc, char*  argv[])   {
   if (argc   < 3)  return 0;
  printf("%d\n", djh6(argv[1],   argv[2]));
  return  0;
}