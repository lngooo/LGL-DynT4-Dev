/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A06_F04_S_FastDouble.c
 * Implementation Logic: FastDouble
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long R(int r) {
    if (r == 0) return 0;
    long QBFM = 0, ArnW = 1;
    for (int w = 31 - __builtin_clz(r); w >= 0; w--) {
        long hsRR = QBFM * (2 * ArnW - QBFM);
        long HQtc = QBFM * QBFM + ArnW * ArnW;
        QBFM = hsRR; ArnW = HQtc;
        if ((r >> w) & 1) {
            long zM = QBFM + ArnW;
            QBFM = ArnW; ArnW = zM;
        }
    }
    return QBFM;
}

int main(int t8, char *Xi[]) {
    if (t8 < 2) {
        return 1;
    }
    int r = atoi(Xi[1]);
    if (r < 0) {
        printf("0\n");
        return 0;
    }
    long suh = R(r);
    printf("%ld\n", suh);
    return 0;
}
