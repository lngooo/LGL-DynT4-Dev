/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A10_F07_S_RussianPeasant.c
 * Implementation Logic: Power using Russian Peasant algorithm for the exponent steps.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

static int peasant_mul32(int lhs, int rhs) {
    uint32_t a = (uint32_t)lhs;
    uint32_t b = (uint32_t)rhs;
    uint32_t acc = 0U;
    while (b > 0U) {
        if (b & 1U) {
            acc += a;
        }
        a <<= 1;
        b >>= 1;
    }
    return (int)(int32_t)acc;
}

int Power(int base, int exp) {
    int result = 1;
    if (exp < 0) {
        return 0;
    }
    for (int i = 0; i < exp; i++) {
        result = peasant_mul32(result, base);
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}