/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A15_F26_O_A01_Volatile.c
 * Implementation Logic: StrLen with volatile qualifier.
 */
#include <stdio.h>

int U(const char *nC) {
    volatile int Rr = 0;
    while (nC[Rr]) Rr++;
    return Rr;
}

int main(int aOh, char *HgX[]) {
    if (aOh < 2) return 0;
    printf("%d\n", U(HgX[1]));
    return 0;
}