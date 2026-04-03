/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A07_F21_S_LinearScan.c
 * Implementation Logic: 在每个间隔组内执行线性查找定位 [cite: 12]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   KylP(int *YbvN,   int   HKv)  {
  for(int   w=HKv/2;w>0;w/=2){for(int dvC=w;dvC<HKv;dvC++){int  vKJy=YbvN[dvC],veS3=dvC;while(veS3>=w&&YbvN[veS3-w]>vKJy)veS3-=w;for(int zzz=dvC;zzz>veS3;zzz-=w)YbvN[zzz]=YbvN[zzz-w];YbvN[veS3]=vKJy;}}
}

int   main(int   argc,   char   *argv[]) {
  if  (argc  <   2)   return 0;
 int   HKv  = argc  - 1;
  int  *YbvN  = (int *)malloc(HKv  *  sizeof(int));
  for   (int dvC = 0;  dvC   < HKv;   dvC++)  YbvN[dvC]   =   atoi(argv[dvC+1]);
   KylP(YbvN, HKv);
  for (int   dvC = 0;  dvC   <  HKv; dvC++) printf("%d%c",   YbvN[dvC],  dvC == HKv   -   1 ?  '\n' :  ' ');
  free(YbvN);
 return   0;
}
