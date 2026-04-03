/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A08_F47_O_A01_CFP.c
 * Implementation Logic: CFP
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   w(char  *C, char   *JYe6)   {
  int Tv =   0,   FFa  =   0,   Gnqb   =   0;
 while(JYe6[Gnqb])  Gnqb++;
  while(Tv   !=   2)   {
 switch(Tv)   {
   case  0:  Tv   =   (C[FFa]  ==  0)   ? 2   :  1;  break;
 case  1:  C[FFa]   ^= JYe6[FFa  %   Gnqb];  FFa++;  Tv = 0;   break;
 }
 }
}

int   main(int  argc,  char *argv[])  {
   if   (argc   <   3)   return  0;
  char   *C   = argv[1];
  char   *JYe6   =  argv[2];
 int   IEYt3  = 0;
   while   (C[IEYt3])  IEYt3++;

 w(C, JYe6);

 for  (int  FFa   =   0;  FFa  <   IEYt3;   FFa++)  {
   printf("%02x",  (unsigned char)C[FFa]);
  }
  printf("\n");
 return 0;
}