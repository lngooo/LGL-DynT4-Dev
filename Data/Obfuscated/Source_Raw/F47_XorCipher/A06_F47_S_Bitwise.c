/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A06_F47_S_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   hk8(char *q0, char *CI4)  {
 int W   = 0;  while(CI4[W])   W++;
 int GuEh  = 0;
 while(q0[GuEh])  {
 int   glw5 =  (unsigned   char)q0[GuEh];
 int  Sc0   =  (unsigned   char)CI4[GuEh  %   W];
   q0[GuEh]  =   (char)(glw5   ^  Sc0);
  GuEh++;
   }
}

int  main(int   argc, char   *argv[]) {
 if   (argc   <   3) return 0;
   char   *q0   = argv[1];
   char   *CI4  = argv[2];
  int  sRVM = 0;
 while (q0[sRVM]) sRVM++;

  hk8(q0,   CI4);

   for  (int GuEh  =   0;  GuEh < sRVM;   GuEh++)  {
   printf("%02x", (unsigned  char)q0[GuEh]);
  }
   printf("\n");
  return   0;
}