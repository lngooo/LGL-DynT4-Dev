/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A09_F18_O_A01_Bitwise.c
 * Implementation Logic: Bitwise
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rJ(int  F[],   int O,   int gSWp,   int  Eu)  {
   if  (!(O <  gSWp))   return  F[O];
  int   hBs9 = F[gSWp], jzLF =  O;
  for  (int  Q7 =   O; Q7   < gSWp;   Q7++)  {
 if   (!(F[Q7] >  hBs9)) {
   int F9  = F[jzLF];  F[jzLF] =   F[Q7];   F[Q7] =  F9;
 jzLF++;
 }
 }
   int  F9  =  F[jzLF];   F[jzLF]   =  F[gSWp]; F[gSWp]   =  F9;
 if (jzLF ^  (Eu   -  1)) {
  if (jzLF  >  Eu  - 1)   return   rJ(F, O,   jzLF - 1,   Eu);
 return   rJ(F,   jzLF   +   1,  gSWp, Eu);
 }
  return  F[jzLF];
}

int main(int  argc, char *argv[]) {
   if (argc  <  3) return   0;
   int Eu =   atoi(argv[1]);
  int   SMS   = argc -  2;
  int   *F   = (int  *)malloc(SMS  *  sizeof(int));
  for  (int  jzLF  = 0;  jzLF <  SMS;  jzLF++)  F[jzLF] =  atoi(argv[jzLF  +  2]);

   // 假设  K  是从 1 开始的  (1st  smallest)
  int CI2  =   rJ(F, 0,   SMS -   1,   Eu);

 printf("%d\n",   CI2);
  free(F);
 return  0;
}