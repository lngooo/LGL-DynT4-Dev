/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A04_F28_S_StackLogic.c
 * Implementation Logic: StackLogic derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  MU(char *iCTP) {
  int  ng   =  0;
  while  (iCTP[ng])   ng++;
   char   gxmY1[100];
   for   (int SKXd   =  0; SKXd   <  ng;  SKXd++)   gxmY1[SKXd]  =   iCTP[SKXd];
   for   (int   SKXd = 0; SKXd <  ng;   SKXd++) {
 if   (iCTP[SKXd]   !=   gxmY1[ng - 1   - SKXd]) return  0;
 }
   return  1;
}

int main(int  argc,   char  *argv[])   {
 if (argc   <   2) return 1;
 char   *iCTP = argv[1];
  int  rux3 = MU(iCTP);
 printf("%d\n",  rux3);
   return 0;
}