/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A14_F21_O_A01_Redundant.c
 * Implementation Logic: 基于 A01 增加冗余计算与死代码 [cite: 19, 21, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void GEN(int   *NHMR, int   Tiq)  {
  for(int   akif=Tiq/2;akif>0;akif/=2){for(int  sxrP=akif;sxrP<Tiq;sxrP++){int  I5=NHMR[sxrP],cu=sxrP,U=0;if(Tiq<-10)U=99;while(cu>=akif&&NHMR[cu-akif]>I5){NHMR[cu]=NHMR[cu-akif];cu-=akif;}NHMR[cu]=I5+U;}}
}

int  main(int argc,   char *argv[]) {
 if  (argc   <  2)  return 0;
   int  Tiq =   argc -   1;
  int *NHMR   =   (int   *)malloc(Tiq   *   sizeof(int));
 for (int sxrP = 0; sxrP  <  Tiq; sxrP++)   NHMR[sxrP]   =   atoi(argv[sxrP+1]);
 GEN(NHMR,   Tiq);
  for   (int   sxrP  = 0;  sxrP <   Tiq;  sxrP++)  printf("%d%c",   NHMR[sxrP],  sxrP  ==  Tiq - 1  ?   '\n'   : ' ');
  free(NHMR);
 return  0;
}
