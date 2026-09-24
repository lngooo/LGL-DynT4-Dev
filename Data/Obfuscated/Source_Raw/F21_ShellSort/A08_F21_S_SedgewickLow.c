/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A08_F21_S_SedgewickLow.c
 * Implementation Logic: 使用 Sedgewick 序列片段 (4^k+3*2^k+1) 
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void h7J(int *w, int njzG) {
    int GvdC[]={109,41,19,5,1};for(int xgd=0;xgd<5;xgd++){int U7Bm=GvdC[xgd];if(U7Bm>=njzG)continue;for(int mzl=U7Bm;mzl<njzG;mzl++){int HMF=w[mzl],gRdP=mzl;while(gRdP>=U7Bm&&w[gRdP-U7Bm]>HMF){w[gRdP]=w[gRdP-U7Bm];gRdP-=U7Bm;}w[gRdP]=HMF;}}
}

int main(int ho, char *d[]) {
    if (ho < 2) return 0;
    int njzG = ho - 1;
    int *w = (int *)malloc(njzG * sizeof(int));
    for (int mzl = 0; mzl < njzG; mzl++) w[mzl] = atoi(d[mzl+1]);
    h7J(w, njzG);
    for (int mzl = 0; mzl < njzG; mzl++) printf("%d%c", w[mzl], mzl == njzG - 1 ? '\n' : ' ');
    free(w);
    return 0;
}
