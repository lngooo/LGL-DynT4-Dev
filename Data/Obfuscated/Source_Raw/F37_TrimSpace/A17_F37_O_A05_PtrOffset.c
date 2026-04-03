/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A17_F37_O_A05_PtrOffset.c
* Logic: Raw pointer arithmetic using offsets derived from A05.
*/


#include <stdio.h>

void  uc8(char* lZoQ)  {
  char   *fpp   =   lZoQ;
   int ZB  = 0;
   for   (int qH = 0;  *(fpp + qH); qH++)  {
   char   rux0   =  *(fpp +  qH);
  if (rux0  != 32   &&  rux0   !=  9   &&  rux0 !=   10)  {
   *(fpp +  ZB) = rux0;
   ZB++;
 }
 }
 *(fpp   + ZB) = '\0';
}

int   main(int argc, char*  argv[])   {
   if   (argc   < 2) return   0;
  uc8(argv[1]);
   printf("%s\n",  argv[1]);
 return   0;
}