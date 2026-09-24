/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A07_F45_S_Parity.c
 * Implementation Logic: Calculating G[i] = B[i] ^ B[i+1] via parity condition.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int Cf(unsigned int H) {
    unsigned int u = 0;
    unsigned int Q, Sqv;
    for (int WK = 0; WK < 32; WK++) {
        Q = (H >> WK) & 1U;
        Sqv = (WK == 31) ? 0U : ((H >> (WK + 1)) & 1U);
        if (Q != Sqv) u |= (1U << WK);
    }
    return u;
}

int main(int jbm, char* Z2Q[]) {
    if (jbm < 2) return 0;
    unsigned int H = (unsigned int)strtoul(Z2Q[1], NULL, 10);
    printf("%u", Cf(H));
    return 0;
}