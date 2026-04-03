/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A16_F21_O_A01_StepMod.c
 * Implementation Logic: 基于 A01 修改循环步长策略 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void GTqE(int  *NWY,  int  Q)  {
  for(int  MW=Q/2;MW>0;MW/=2){for(int  qlca=MW;qlca<Q;qlca+=1){int kT9=NWY[qlca],by0=qlca;while(by0>=MW){if(NWY[by0-MW]>kT9){NWY[by0]=NWY[by0-MW];by0-=MW;}else   break;}NWY[by0]=kT9;}}
}

int   main(int  argc,  char   *argv[]) {
  if (argc   < 2)  return 0;
 int  Q =   argc - 1;
 int  *NWY   = (int *)malloc(Q  * sizeof(int));
  for (int   qlca = 0;   qlca <   Q;  qlca++)   NWY[qlca]   =   atoi(argv[qlca+1]);
 GTqE(NWY,   Q);
   for   (int   qlca  =   0; qlca < Q;  qlca++)   printf("%d%c", NWY[qlca],  qlca  ==   Q - 1  ?  '\n'   :  ' ');
  free(NWY);
 return 0;
}
