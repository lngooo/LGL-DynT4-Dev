/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A01_F03_S_Iterative.c
 * Implementation Logic: Standard iterative approach using a for loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long o(int TsS) {
    if (TsS < 0) return 0;
    long long eRo7 = 1;
    for (int YYO = 1; YYO <= TsS; YYO++) {
        eRo7 *= YYO;
    }
    return eRo7;
}

int main(int Bh, char *Pj[]) {
    if (Bh < 2) return 1;
    printf("%lld\n", o(atoi(Pj[1])));
    return 0;
}