/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A09_F48_O_A04_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  As(const char  *Df,   char *iG) {
  int  Z1 =  strlen(Df),   JpD4 = 0;
   if ((Z1  * Z1 +   1) >  0) {
   for   (int yA   =  0;   yA   < Z1; )  {
 int  ZlPI = 1;
   while (yA   + ZlPI  <  Z1 && Df[yA] ==  Df[yA+ZlPI])   ZlPI++;
   JpD4 +=  sprintf(iG  + JpD4, "%c%d",  Df[yA],   ZlPI);
   yA   +=   ZlPI;
  }
 }
}

int main(int   argc, char *argv[])   {
 if   (argc <  2)   return 0;
   char  *D = argv[1];
  char A[256]  =   {0};
  As(D, A);
   printf("%s\n",   A);
 return 0;
}