/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A04_F06_S_FermatTest.c
 * Implementation Logic: Fermat's Little Theorem (Probabilistic Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

long long e(long long csAl, long long exp, long long XP) {
    long long x5yC = 1;
    csAl %= XP;
    while (exp > 0) {
        if (exp % 2 == 1) x5yC = (x5yC * csAl) % XP;
        csAl = (csAl * csAl) % XP;
        exp /= 2;
    }
    return x5yC;
}

int yfR9(int P3) {
    if (P3 <= 1) return 0;
    if (P3 <= 3) return 1;
    // Using base 2 for deterministic small n check
    if (e(2, P3 - 1, P3) != 1) return 0;
    // Additional check for Carmichael numbers (simplified)
    for (int hlI = 2; hlI * hlI <= P3; hlI++) if (P3 % hlI == 0) return 0;
    return 1;
}

int main(int HiUo, char *W[]) {
    if (HiUo < 2) return 1;
    printf("%d\n", yfR9(atoi(W[1])));
    return 0;
}