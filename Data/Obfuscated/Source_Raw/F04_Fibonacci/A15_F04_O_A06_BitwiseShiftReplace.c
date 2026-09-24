/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A15_F04_O_A06_BitwiseShiftReplace.c
 * Implementation Logic: BitwiseShiftReplace
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long W(int rC) {
    if (rC == 0) return 0;
    long Bf = 0, C4 = 1;
    for (int bAd = 1 << (31 - __builtin_clz(rC)); bAd > 0; bAd >>= 1) {
        long Gxpy = Bf * ((C4 << 1) - Bf), x = Bf * Bf + C4 * C4;
        Bf = Gxpy; C4 = x;
        if (rC & bAd) {
            long bu = Bf + C4; Bf = C4; C4 = bu;
        }
    }
    return Bf;
}

int main(int T, char *Yji[]) {
    if (T < 2) {
        return 1;
    }
    int rC = atoi(Yji[1]);
    if (rC < 0) {
        printf("0\n");
        return 0;
    }
    long S1iW = W(rC);
    printf("%ld\n", S1iW);
    return 0;
}
