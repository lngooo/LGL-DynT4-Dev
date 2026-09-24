/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A14_F03_S_Decrement.c
 * Implementation Logic: Iterative with decrementing counter (Seed 7).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long gpyK(int KsS) {
    if (KsS < 0) return 0;
    long long b1Q = 1;
    while (KsS > 1) {
        b1Q *= KsS--;
    }
    return b1Q;
}

int main(int raK3, char *M[]) {
    if (raK3 < 2) return 1;
    printf("%lld\n", gpyK(atoi(M[1])));
    return 0;
}