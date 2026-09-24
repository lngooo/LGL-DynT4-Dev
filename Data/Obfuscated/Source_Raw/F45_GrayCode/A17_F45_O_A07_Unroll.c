/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A17_F45_O_A07_Unroll.c
 * Implementation Logic: Loop unrolling with combined bit-checks derived from A07.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int ATZy(unsigned int SYz) {
    unsigned int ir = 0;
    for (int N = 0; N < 32; N += 4) {
        unsigned int A2IC = (SYz >> N) & 1U;
        unsigned int YNs = (SYz >> (N + 1)) & 1U;
        unsigned int D1fQ = (SYz >> (N + 2)) & 1U;
        unsigned int Ld = (SYz >> (N + 3)) & 1U;
        unsigned int xa = (N + 4 >= 32) ? 0U : ((SYz >> (N + 4)) & 1U);
        if (A2IC != YNs) ir |= (1U << N);
        if (YNs != D1fQ) ir |= (1U << (N + 1));
        if (D1fQ != Ld) ir |= (1U << (N + 2));
        if (Ld != xa) ir |= (1U << (N + 3));
    }
    return ir;
}

int main(int A, char* Z[]) {
    if (A < 2) return 0;
    unsigned int SYz = (unsigned int)strtoul(Z[1], NULL, 10);
    printf("%u", ATZy(SYz));
    return 0;
}