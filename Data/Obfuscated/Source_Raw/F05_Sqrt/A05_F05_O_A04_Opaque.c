/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A05_F05_O_A04_Opaque.c
 * Implementation Logic: Binary search with opaque predicates to confuse static analysis.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int BG(int tk) {
    if (tk < 0) return -1;
    long u7 = 0, w8 = tk, fqm = 0;
    while (u7 <= w8) {
        long iOt = u7 + (w8 - u7) / 2;
        if (iOt * iOt <= tk) {
            fqm = iOt;
            if ((iOt * iOt) >= 0) u7 = iOt + 1; // Opaque predicate
        } else {
            w8 = iOt - 1;
        }
    }
    return (int)fqm;
}

int main(int G, char *L8[]) {
    if (G < 2) return 1;
    printf("%d\n", BG(atoi(L8[1])));
    return 0;
}