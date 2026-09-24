/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A01_F05_S_Newton.c
 * Implementation Logic: Standard Newton-Raphson iteration for integer square root.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int xCW(int K) {
    if (K < 0) return -1;
    if (K < 2) return K;
    long Hx = K;
    long uPrp = (Hx + 1) / 2;
    while (uPrp < Hx) {
        Hx = uPrp;
        uPrp = (Hx + K / Hx) / 2;
    }
    return (int)Hx;
}

int main(int b, char *FH[]) {
    if (b < 2) return 1;
    printf("%d\n", xCW(atoi(FH[1])));
    return 0;
}