/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A21_F40_O_A06_Wrapper.c
 * Implementation Logic: Library call wrapped in extra function pointers.
 */


#include <stdio.h>

typedef int (*cl3)(const   char*, const char*,   ...);

int tcjB(const   char* k)   {
  int  JOe   =  0;
  cl3   kdyw = sscanf;
 kdyw(k, "%x", &JOe);
 return  JOe;
}

int main(int argc,   char* argv[])  {
 if  (argc   < 2) return 0;
  printf("%d", tcjB(argv[1]));
 return  0;
}