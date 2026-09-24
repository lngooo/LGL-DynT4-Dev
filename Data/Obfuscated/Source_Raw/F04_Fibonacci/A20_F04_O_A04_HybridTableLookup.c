/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A20_F04_O_A04_HybridTableLookup.c
 * Implementation Logic: HybridTableLookup
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long ZfU(int fBM0) {
    long Is[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    if (fBM0 <= 9) return Is[fBM0];
    return ZfU(fBM0 - 1) + ZfU(fBM0 - 2);
}

int main(int gfu, char *tCM[]) {
    if (gfu < 2) {
        return 1;
    }
    int fBM0 = atoi(tCM[1]);
    if (fBM0 < 0) {
        printf("0\n");
        return 0;
    }
    long kSCw = ZfU(fBM0);
    printf("%ld\n", kSCw);
    return 0;
}
