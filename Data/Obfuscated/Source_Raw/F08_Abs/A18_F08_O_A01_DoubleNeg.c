/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A18_F08_O_A01_DoubleNeg.c
 * Implementation Logic: Recursive-style absolute.
 */
#include <stdio.h>
#include <stdlib.h>

int hc8(int dk7K) {
    return -dk7K;
}

int UzFb(int dk7K) {
    if (dk7K < 0) return hc8(dk7K);
    return dk7K;
}

int main(int RBlw, char *lr[]) {
    if (RBlw < 2) return 1;
    printf("%d\n", UzFb(atoi(lr[1])));
    return 0;
}