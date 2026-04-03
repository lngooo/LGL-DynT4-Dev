/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A03_F47_S_Pointer.c
 * Implementation Logic: Pointer
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void UBvO(char *adt,   char *OwC6)   {
   char   *qeF =   adt,  *M9  = OwC6;
  while   (*qeF)  {
 if   (!*M9)  M9  =   OwC6;
   *qeF   ^=   *M9;
   qeF++; M9++;
 }
}

int   main(int  argc, char *argv[]) {
 if  (argc < 3) return   0;
 char  *adt =  argv[1];
 char  *OwC6  =  argv[2];
   int  LL =  0;
 while (adt[LL]) LL++;

   UBvO(adt, OwC6);

 for  (int   qbk  =  0;  qbk   <   LL;  qbk++)  {
 printf("%02x", (unsigned char)adt[qbk]);
   }
 printf("\n");
   return  0;
}