/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A19_F46_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static void k(unsigned char *I, int Q, int K, char *Mc, int lX, const char *x) {
    if (K >= Q) {
        Mc[lX] = 0;
        return;
    }
    unsigned int pNc = I[K] << 16 | (K + 1 < Q ? I[K + 1] << 8 : 0) | (K + 2 < Q ? I[K + 2] : 0);
    Mc[lX] = x[(pNc >> 18) & 63];
    Mc[lX + 1] = x[(pNc >> 12) & 63];
    Mc[lX + 2] = (K + 1 < Q) ? x[(pNc >> 6) & 63] : '=';
    Mc[lX + 3] = (K + 2 < Q) ? x[pNc & 63] : '=';
    k(I, Q, K + 3, Mc, lX + 4, x);
}
void qIK(unsigned char *I, int Q, char *Mc) {
    const char *x = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    k(I, Q, 0, Mc, 0, x);
}

int main(int L, char *l5[]) {
    if (L < 2) return 1;
    unsigned char *I = (unsigned char *)l5[1];
    int Q = 0;
    while (I[Q]) Q++;
    char Mc[400] = {0};
    qIK(I, Q, Mc);
    printf("%s\n", Mc);
    return 0;
}