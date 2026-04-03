/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A05_F47_S_Block.c
 * Implementation Logic: Block
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  sj5(char  *q8,   char   *luw)  {
  int   LNu =  0,  nlh = 0;
   while(q8[LNu]) LNu++; while(luw[nlh])  nlh++;
   for(int  e=0; e  <  LNu;   e +=   nlh)   {
  for(int rwG=0;   rwG   < nlh   &&  (e+rwG)   <  LNu;   rwG++)   {
  q8[e+rwG]  ^=  luw[rwG];
  }
 }
}

int  main(int  argc,  char  *argv[])  {
  if  (argc   <  3) return 0;
 char   *q8  =  argv[1];
   char *luw =  argv[2];
 int   bn3  =   0;
   while   (q8[bn3])  bn3++;

   sj5(q8, luw);

   for (int  e   =  0; e  <   bn3; e++)  {
   printf("%02x", (unsigned  char)q8[e]);
  }
  printf("\n");
   return 0;
}