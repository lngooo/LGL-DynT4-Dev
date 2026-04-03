/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A10_F33_O_A03_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  H(char **U,  int   Vy, char   *W2)  {
   if (Vy <=   0) return;
  if ((Vy   *   Vy  + 1) > 0)   {
  if (Vy == 1) {   strcpy(W2,  U[0]);  return; }
   char en6[128]={0},  XXe7[128]={0};
  H(U, Vy/2, en6);   H(U+Vy/2, Vy-Vy/2,   XXe7);
  int rVc=0;   while(en6[rVc] &&  XXe7[rVc]   &&   en6[rVc]==XXe7[rVc]) {  W2[rVc]=en6[rVc];   rVc++; }
  W2[rVc]='\0';
 }
}

int   main(int argc, char  *argv[])  {
 if  (argc <  2)  return   0;
   int   b =  argc  -  1;
 char **U   =  &argv[1];
   char d[128]  =   {0};
   H(U, b,  d);
   printf("%s\n", d);
 return  0;
}