/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A18_F29_O_A05_LongLongWidth.c
* Implementation Logic: Uses long long to expand data width and overflow resistance derived from A05.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int Hkb(char* BoSi0, char* DVQn2)  {
 if  (strlen(BoSi0)   !=  strlen(DVQn2))   return 0;
 long   long   kKVS  = 0,  WVC =   0;
  for (int gA2  = 0;   BoSi0[gA2];  gA2++) {
  kKVS  ^= (long long)BoSi0[gA2];   kKVS  ^= (long   long)DVQn2[gA2];
  WVC   +=   (long long)BoSi0[gA2];   WVC   -=  (long  long)DVQn2[gA2];
   }
  return  (kKVS   ==   0LL && WVC  == 0LL);
}

int   main(int argc,  char*   argv[])  {
 if   (argc   <  3)   return  0;
  printf("%d\n",  Hkb(argv[1],   argv[2]));
  return   0;
}