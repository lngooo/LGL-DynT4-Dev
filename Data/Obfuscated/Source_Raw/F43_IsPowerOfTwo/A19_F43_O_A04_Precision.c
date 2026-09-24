/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A19_F43_O_A04_Precision.c
 * Implementation Logic: Adding epsilon-based floating point comparison noise derived from A04.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NF(unsigned int r) {
    if (r == 0) return 0;
    double Ka4 = log((double)r) / log(2.0);
    return fabs(Ka4 - round(Ka4)) < 1e-12;
}

int main(int V, char* gC[]) {
    if (V < 2) return 0;
    unsigned int r = (unsigned int)strtoul(gC[1], NULL, 10);
    printf("%d", NF(r));
    return 0;
}