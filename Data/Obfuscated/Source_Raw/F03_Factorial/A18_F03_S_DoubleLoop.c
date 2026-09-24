/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A18_F03_S_DoubleLoop.c
 * Implementation Logic: Factorial as repeated addition (Seed 9).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long xRVR(int Ly0) {
    if (Ly0 < 0) return 0;
    long long gRo = 1;
    for (int bN48 = 1; bN48 <= Ly0; bN48++) {
        long long NoP = 0;
        for (int O = 0; O < bN48; O++) {
            NoP += gRo;
        }
        gRo = NoP;
    }
    return gRo;
}

int main(int StPA, char *c[]) {
    if (StPA < 2) return 1;
    printf("%lld\n", xRVR(atoi(c[1])));
    return 0;
}