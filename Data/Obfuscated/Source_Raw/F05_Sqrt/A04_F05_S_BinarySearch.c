/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A04_F05_S_BinarySearch.c
 * Implementation Logic: Binary search approach in the range [0, n] (Seed 2).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int N4(int e) {
    if (e < 0) return -1;
    if (e < 2) return e;
    long zTU = 0, HAXA = e, i = 0;
    while (zTU <= HAXA) {
        long PeC = zTU + (HAXA - zTU) / 2;
        if (PeC * PeC <= e) {
            i = PeC;
            zTU = PeC + 1;
        } else {
            HAXA = PeC - 1;
        }
    }
    return (int)i;
}

int main(int RHwi, char *X9[]) {
    if (RHwi < 2) return 1;
    printf("%d\n", N4(atoi(X9[1])));
    return 0;
}