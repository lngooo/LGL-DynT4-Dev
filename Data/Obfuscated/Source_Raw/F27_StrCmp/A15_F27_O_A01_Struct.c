/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A15_F27_O_A01_Struct.c
 * Implementation Logic: Pointers wrapped in a struct to obfuscate data flow from A01.
 */


#include <stdio.h>
#include <stdlib.h>

struct  BWr  {   const char *ArJn8;   const  char  *uYv6;  };

int  JT3(const  char *X, const char   *vQs) {
 struct BWr   Exk4   =   {X,   vQs};
   while  (*Exk4.ArJn8   && (*Exk4.ArJn8 == *Exk4.uYv6)) {
 Exk4.ArJn8++;  Exk4.uYv6++;
   }
 return *(unsigned   char   *)Exk4.ArJn8   -   *(unsigned   char *)Exk4.uYv6;
}

int main(int   argc,   char *argv[])   {
 if (argc   < 3) return   0;
  printf("%d\n", JT3(argv[1],  argv[2]));
  return  0;
}