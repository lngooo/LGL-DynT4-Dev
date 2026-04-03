/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A07_F32_S_Sentinel.c
* Implementation Logic: Uses index-based matching with a terminal condition check.
*/


#include <stdio.h>
#include <string.h>

void   Zm(char*  s)   {
   int   zXEA   =   0,  Djon3  =   0;
  while (s[zXEA])   {
   for   (Djon3 =   zXEA;  s[Djon3] == s[zXEA];   Djon3++);
 printf("%c%d",  s[zXEA],  Djon3  - zXEA);
 zXEA   =  Djon3;
   }
   printf("\n");
}

int   main(int argc, char*  argv[])  {
  if   (argc   <   2) return  0;
 Zm(argv[1]);
   return   0;
}