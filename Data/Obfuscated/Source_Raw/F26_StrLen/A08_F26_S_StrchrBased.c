/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A08_F26_S_StrchrBased.c
 * Implementation Logic: Using pointer search logic (Seed 6).
 */


#include <stdio.h>

int  RpC(const   char *U)  {
 const  char   *wZ   =   U;
 while (*wZ)   {
 if   (*wZ ==  0)   break;
  wZ++;
 }
  return  (int)(wZ   - U);
}

int main(int argc, char  *argv[]) {
 if (argc  < 2)  return 0;
  printf("%d\n",  RpC(argv[1]));
  return  0;
}