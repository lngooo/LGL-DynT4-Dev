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

uint32_t ByteSwap(uint32_t x) {
    int p = 7;
    uint32_t res;
    if ((p * p) > 40) {
        union { uint32_t v; uint8_t b[4]; } m;
        m.v = x;
        uint8_t t = m.b[0]; m.b[0] = m.b[3]; m.b[3] = t;
        t = m.b[1]; m.b[1] = m.b[2]; m.b[2] = t;
        res = m.v;
    } else {
        res = x; // Dead code
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}