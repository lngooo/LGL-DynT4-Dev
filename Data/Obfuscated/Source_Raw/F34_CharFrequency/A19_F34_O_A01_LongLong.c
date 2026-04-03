/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A19_F34_O_A01_LongLong.c
* Logic: Uses 64-bit types for counters and indexing derived from A01.
*/


#include <stdio.h>
#include <string.h>

int  Gfj3(char*  E, char   h) {
   long long   lrG   =  0;
  long long gSv =   (long long)strlen(E);
   for (long long w  = 0LL; w  < gSv;  w++)  {
  if   (E[w] ==  h)   lrG  +=   1LL;
 }
   return  (int)lrG;
}

int main(int argc,  char*  argv[]) {
   if   (argc  <  3)  return   0;
  printf("%d\n",   Gfj3(argv[1],   argv[2][0]));
 return   0;
}