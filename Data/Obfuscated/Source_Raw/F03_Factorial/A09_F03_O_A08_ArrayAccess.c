/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A09_F03_O_A08_ArrayAccess.c
 * Implementation Logic: DP with obfuscated array indexing and redundant storage.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long D7u3(int Sp) {
    if (Sp < 0) return 0;
    long long o2XA[21]; 
    o2XA[0] = 1;
    for (int u = 1; u <= Sp && u < 21; u++) {
        int T6Zy = (u * 2) / 2;
        o2XA[T6Zy] = o2XA[T6Zy - 1] * u;
    }
    return o2XA[Sp > 20 ? 20 : Sp];
}

int main(int QY0P, char *F9[]) {
    if (QY0P < 2) return 1;
    printf("%lld\n", D7u3(atoi(F9[1])));
    return 0;
}