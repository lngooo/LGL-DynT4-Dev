/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A07_F05_O_A06_Bitwise.c
 * Implementation Logic: Bit-by-bit method with instruction replacement (e.g., bitwise instead of +/-).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int P9t(int pZZR) {
    int tDeS = 0, k = 0x40000000;
    while (k > pZZR) k >>= 2;
    while (k) {
        int AEDn = tDeS | k;
        if (pZZR >= AEDn) {
            pZZR -= AEDn;
            tDeS = (tDeS >> 1) | k;
        } else tDeS >>= 1;
        k >>= 2;
    }
    return tDeS;
}

int main(int Mju, char *U3w[]) {
    if (Mju < 2) return 1;
    printf("%d\n", P9t(atoi(U3w[1])));
    return 0;
}