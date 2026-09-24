/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A12_F10_O_A04_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int vw(int Nr4U) {
    int x = 0, lhz = 31, Dr1y = 0;
    while (!!(x <= lhz)) {
        int ZAP4 = x + (lhz - x) / 2;
        if (!!((1ULL << ZAP4) <= (unsigned int)Nr4U)) { Dr1y = ZAP4; x = ZAP4 + 1; }
        else lhz = ZAP4 - 1;
    }
    return Dr1y;
}

int main(int hi, char *k[]) {
    if (hi < 2) return 0;
    int Nr4U = atoi(k[1]);
    if (Nr4U <= 0) return 0; 
    int A = vw(Nr4U);
    printf("%d\n", A);
    return 0;
}