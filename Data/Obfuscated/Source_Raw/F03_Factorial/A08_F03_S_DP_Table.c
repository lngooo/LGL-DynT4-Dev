/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A08_F03_S_DP_Table.c
 * Implementation Logic: Dynamic Programming with memoization table (Seed 4).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long ym(int er) {
    if (er < 0) return 0;
    if (er == 0) return 1;
    long long *v7YG = (long long *)malloc((er + 1) * sizeof(long long));
    v7YG[0] = 1;
    for (int asU = 1; asU <= er; asU++) {
        v7YG[asU] = v7YG[asU - 1] * asU;
    }
    long long LLQ = v7YG[er];
    free(v7YG);
    return LLQ;
}

int main(int jCIE, char *vJW[]) {
    if (jCIE < 2) return 1;
    printf("%lld\n", ym(atoi(vJW[1])));
    return 0;
}