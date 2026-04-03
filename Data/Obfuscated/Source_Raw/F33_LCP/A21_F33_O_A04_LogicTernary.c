/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A21_F33_O_A04_LogicTernary.c
 * Implementation Logic: LogicTernary
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  FNZC(char **Pym7, int cf,   char   *AsUi)  {
 int   m4   =  128;
  for(int  Tc5=0; Tc5<cf;  Tc5++) {  int tJHc   = strlen(Pym7[Tc5]); m4  = (tJHc <   m4)   ?  tJHc  :  m4;   }
   int Xq7  =  0;
  for(int   Y=0;  Y<m4;  Y++)   {
  char gPxC   =   Pym7[0][Y];
   int yW   =   1;
  for(int  h=1; h<cf;  h++)  yW = (Pym7[h][Y]  ==  gPxC)  ?  yW :  0;
 if(yW)  { AsUi[Y]   = gPxC;  Xq7++; }  else break;
 }
   AsUi[Xq7]  =  '\0';
}

int   main(int  argc, char *argv[]) {
   if   (argc  <  2)  return 0;
  int   cj7   = argc  -   1;
  char  **Pym7 =   &argv[1];
 char   Dabe[128]   = {0};
 FNZC(Pym7, cj7,  Dabe);
  printf("%s\n",   Dabe);
 return   0;
}