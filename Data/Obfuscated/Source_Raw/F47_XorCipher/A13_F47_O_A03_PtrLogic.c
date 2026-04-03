/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A13_F47_O_A03_PtrLogic.c
 * Implementation Logic: PtrLogic
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   i3(char *s7,  char  *F9)  {
  for(char   *OPv   =   s7;   *OPv  !=   0; OPv++)   {
   int  GBg   = (int)(OPv - s7);
 int   od3 =   0;   while(F9[od3]) od3++;
 *OPv ^=  *(F9 +  (GBg  % od3));
 }
}

int  main(int  argc,  char *argv[])   {
 if   (argc   <   3)   return  0;
 char   *s7   =   argv[1];
 char   *F9  = argv[2];
 int  sJ   =  0;
   while   (s7[sJ]) sJ++;

   i3(s7,  F9);

 for (int Eeki  =   0; Eeki < sJ; Eeki++)   {
  printf("%02x",   (unsigned   char)s7[Eeki]);
   }
   printf("\n");
   return 0;
}