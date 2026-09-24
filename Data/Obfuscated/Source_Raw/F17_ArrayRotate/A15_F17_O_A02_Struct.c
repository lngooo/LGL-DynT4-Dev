/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A15_F17_O_A02_Struct.c
 * Logic: Juggling algorithm with state wrapped in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct L { int Ki; int wAE; int lpiZ; };

int tL(int G9PW, int tL4) { return tL4 == 0 ? G9PW : tL(tL4, G9PW % tL4); }

void jE(int Mvs[], int Ki, int wAE) {
    if (Ki == 0) return;
    struct L aHL = {Ki, wAE % Ki, tL(wAE % Ki, Ki)};
    for (int dp = 0; dp < aHL.lpiZ; dp++) {
        int B = Mvs[dp], mmO = dp;
        while (1) {
            int Ye = (mmO + aHL.wAE) % aHL.Ki;
            if (Ye == dp) break;
            Mvs[mmO] = Mvs[Ye];
            mmO = Ye;
        }
        Mvs[mmO] = B;
    }
}

int main(int mQE, char *MSv2[]) {
    if (mQE < 3) return 0;
    int wAE = atoi(MSv2[1]);
    int Ki = mQE - 2;
    int *Mvs = (int*)malloc(Ki * sizeof(int));
    for(int dp=0; dp<Ki; dp++) Mvs[dp] = atoi(MSv2[dp+2]);
    jE(Mvs, Ki, wAE);
    for(int dp=0; dp<Ki; dp++) printf("%d ", Mvs[dp]);
    printf("\n");
    free(Mvs);
    return 0;
}