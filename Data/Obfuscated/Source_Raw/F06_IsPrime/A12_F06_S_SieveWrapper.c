/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A12_F06_S_SieveWrapper.c
 * Implementation Logic: Local Sieve of Eratosthenes for primality (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sjmv(int yK) {
    if (yK < 2) return 0;
    char *FJ = (char *)malloc(yK + 1);
    memset(FJ, 1, yK + 1);
    for (int qW0 = 2; qW0 * qW0 <= yK; qW0++) {
        if (FJ[qW0]) {
            for (int UPVF = qW0 * qW0; UPVF <= yK; UPVF += qW0) FJ[UPVF] = 0;
        }
    }
    int kUYw = FJ[yK];
    free(FJ);
    return kUYw;
}

int main(int iU, char *l64I[]) {
    if (iU < 2) return 1;
    printf("%d\n", sjmv(atoi(l64I[1])));
    return 0;
}