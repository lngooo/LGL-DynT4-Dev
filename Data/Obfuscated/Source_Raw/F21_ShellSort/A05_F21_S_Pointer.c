/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A05_F21_S_Pointer.c
 * Implementation Logic: 纯指针偏移实现，不使用数组下标 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void t(int *SNY, int rSk7) {
    for(int LD=rSk7/2;LD>0;LD/=2){for(int *jWL=SNY+LD;jWL<SNY+rSk7;jWL++){int OCQh=*jWL,*KE=jWL;while(KE>=SNY+LD&&*(KE-LD)>OCQh){*KE=*(KE-LD);KE-=LD;}*KE=OCQh;}}
}

int main(int ruXU, char *ofqX[]) {
    if (ruXU < 2) return 0;
    int rSk7 = ruXU - 1;
    int *SNY = (int *)malloc(rSk7 * sizeof(int));
    for (int Tfw = 0; Tfw < rSk7; Tfw++) SNY[Tfw] = atoi(ofqX[Tfw+1]);
    t(SNY, rSk7);
    for (int Tfw = 0; Tfw < rSk7; Tfw++) printf("%d%c", SNY[Tfw], Tfw == rSk7 - 1 ? '\n' : ' ');
    free(SNY);
    return 0;
}
