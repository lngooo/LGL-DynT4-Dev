/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A10_F44_O_A02_Opaque.c
 * Implementation Logic: Injected opaque predicates (guaranteed true) to obscure the union-based logic of A02.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t G(uint32_t nJEC) {
    int GoU = 7;
    uint32_t nz;
    if ((GoU * GoU) > 40) {
        union { uint32_t WEC; uint8_t q[4]; } o;
        o.WEC = nJEC;
        uint8_t M = o.q[0]; o.q[0] = o.q[3]; o.q[3] = M;
        M = o.q[1]; o.q[1] = o.q[2]; o.q[2] = M;
        nz = o.WEC;
    } else {
        nz = nJEC; // Dead code
    }
    return nz;
}

int main(int N, char* w[]) {
    if (N < 2) return 0;
    uint32_t G0 = (uint32_t)strtoul(w[1], NULL, 10);
    printf("%u\n", G(G0));
    return 0;
}