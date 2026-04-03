/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A14_F33_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   C(char **ia,   int CJ, char  *mag)  {
   if  (CJ <=  0)  return;
  int  Bx4  = 0, vXOl =   0;
 char  yJcl9[128];   strcpy(yJcl9,   ia[0]);
   for  (int  gseg   =  1; gseg  <  CJ;  gseg++)   {
   int fXOr7 =   0, J =   0;
   while (yJcl9[fXOr7+J] &&   ia[gseg][fXOr7+J]  &&   yJcl9[fXOr7+J] ==   ia[gseg][fXOr7+J])   fXOr7++;
 yJcl9[fXOr7+J] =   '\0';
 }
   strcpy(mag,  yJcl9);
}

int  main(int  argc,   char *argv[]) {
 if  (argc <   2) return 0;
  int vRT   =   argc - 1;
  char  **ia   =   &argv[1];
  char   tnoH[128]  =   {0};
 C(ia,  vRT,   tnoH);
 printf("%s\n",  tnoH);
  return  0;
}