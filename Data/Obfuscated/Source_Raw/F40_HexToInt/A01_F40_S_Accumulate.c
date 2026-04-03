/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A01_F40_S_Accumulate.c
 * Implementation Logic: Standard iterative approach multiplying by 16 for each digit.
 * Input Format: <hex_string>
 */


#include <stdio.h>
#include <ctype.h>

int   VJ(const  char* Z)   {
  int   Ia = 0;
   while  (*Z)   {
  char  q = *Z++;
 int Wa   =   0;
 if (q  >=   '0' &&  q <= '9') Wa =  q -   '0';
   else   if   (q  >=  'a'   && q <=  'f')   Wa   =   q  -  'a' +   10;
  else  if (q   >=  'A'   && q   <= 'F') Wa   =  q  -   'A'   + 10;
 Ia =   Ia   *  16   + Wa;
   }
   return   Ia;
}

int   main(int  argc,  char*  argv[]) {
   if (argc   < 2) return  0;
  printf("%d", VJ(argv[1]));
 return   0;
}