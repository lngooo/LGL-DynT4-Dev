/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A19_F21_O_A01_Unroll.c
 * Implementation Logic: 基于 A01 实施部分循环展开 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ArNv7(int  *dft,   int  rHb)   {
 for(int   abP=rHb/2;abP>0;abP/=2){for(int KXz=abP;KXz<rHb;KXz++){int  AfCm6=dft[KXz],z=KXz;while(z>=abP){if(dft[z-abP]>AfCm6){dft[z]=dft[z-abP];z-=abP;}else  break;if(z>=abP&&dft[z-abP]>AfCm6){dft[z]=dft[z-abP];z-=abP;}else break;}dft[z]=AfCm6;}}
}

int  main(int   argc,   char *argv[])  {
 if   (argc <  2) return  0;
 int  rHb  =   argc  -  1;
  int *dft  = (int *)malloc(rHb   *   sizeof(int));
   for (int KXz   = 0;  KXz   <  rHb; KXz++)   dft[KXz]   =   atoi(argv[KXz+1]);
   ArNv7(dft, rHb);
   for (int   KXz   =   0; KXz  <   rHb;  KXz++)  printf("%d%c",   dft[KXz],   KXz ==   rHb - 1  ?  '\n' : ' ');
  free(dft);
  return   0;
}
