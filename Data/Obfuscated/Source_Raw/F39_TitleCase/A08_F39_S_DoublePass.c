/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A08_F39_S_DoublePass.c
 * Implementation Logic: Pass 1: lower all. Pass 2: capitalize word starts.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void   iQB9(char* wv)   {
   for   (int  t  = 0;   wv[t]; t++)  wv[t] =   tolower(wv[t]);
   if   (wv[0]  !=   '\0')   wv[0]  =   toupper(wv[0]);
 for  (int t   =   1;  wv[t];   t++)   {
   if (isspace(wv[t-1]))  wv[t]   =   toupper(wv[t]);
  }
}

int  main(int   argc, char*   argv[])  {
 if   (argc  <  2) return   0;
  iQB9(argv[1]);
  printf("%s", argv[1]);
  return  0;
}