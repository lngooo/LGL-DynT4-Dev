/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A19_F39_O_A01_NestedState.c
 * Implementation Logic: Logic of A01 nested inside multiple for-loops to alter CFG depth.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void  W(char*   Ax)  {
 for  (int  da  =  0;   da  < 1;   da++)   {
   int Z5   =   1;
 for  (int gywS  =   0;  Ax[gywS];  gywS++) {
  for   (int   dPP   =   0; dPP  <   1;  dPP++) {
 if  (isspace(Ax[gywS]))   Z5 =   1;
 else if  (Z5) {   Ax[gywS] =  toupper(Ax[gywS]);  Z5   =  0;  }
   else  Ax[gywS]  = tolower(Ax[gywS]);
   }
   }
 }
}

int  main(int argc,  char* argv[]) {
   if  (argc  <  2) return  0;
  W(argv[1]);
  printf("%s",  argv[1]);
   return   0;
}