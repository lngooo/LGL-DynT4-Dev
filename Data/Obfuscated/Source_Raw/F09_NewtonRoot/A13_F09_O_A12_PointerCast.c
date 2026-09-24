/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A13_F09_O_A12_PointerCast.c
 * Implementation Logic: Magic guess Newton with heavy pointer aliasing.
 */
#include <stdio.h>
#include <stdlib.h>

int Y(int hAjj) {
    if (hAjj < 0) return -1;
    if (hAjj < 2) return hAjj;
    float g = (float)hAjj;
    unsigned int *I4w = (unsigned int *)&g;
    *I4w = 0x1fbd1df5 + (*I4w >> 1);
    long qyPF = (long)g;
    if (qyPF <= 0) qyPF = 1;
    for (int clrz = 0; clrz < 3; clrz++) {
        qyPF = (qyPF + hAjj / qyPF) >> 1;
        if (qyPF <= 0) qyPF = 1;
    }
    while ((long long)qyPF * qyPF > hAjj) {
        qyPF--;
    }
    while ((long long)(qyPF + 1) * (qyPF + 1) <= hAjj) {
        qyPF++;
    }
    return (int)qyPF;
}

int main(int NM, char *cz44[]) {
    if (NM < 2) return 1;
    printf("%d\n", Y(atoi(cz44[1])));
    return 0;
}