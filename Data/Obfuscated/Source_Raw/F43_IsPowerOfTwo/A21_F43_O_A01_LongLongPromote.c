/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A21_F43_O_A01_LongLongPromote.c
 * Implementation Logic: Data width expansion to long long to change token signature derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int VaX1(unsigned int miR) {
    unsigned long long bVVh = miR;
    if (bVVh == 0) return 0;
    unsigned long long K = bVVh - 1;
    return (bVVh & K) == 0;
}

int main(int YL, char* a[]) {
    if (YL < 2) return 0;
    unsigned int miR = (unsigned int)strtoul(a[1], NULL, 10);
    printf("%d", VaX1(miR));
    return 0;
}