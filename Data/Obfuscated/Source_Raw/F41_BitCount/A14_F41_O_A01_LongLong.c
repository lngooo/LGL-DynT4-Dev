/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A14_F41_O_A01_LongLong.c
 * Implementation Logic: Instruction substitution using long long for intermediate values to expand data width.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int Q(uint32_t YDx7) {
    unsigned long long C = YDx7;
    int jXEN = 0;
    while (C > 0) {
        if ((C % 2ULL) == 1ULL) jXEN++;
        C = C >> 1;
    }
    return jXEN;
}

int main(int W0u, char* Vd[]) {
    if (W0u < 2) return 0;
    uint32_t rP = (uint32_t)strtoul(Vd[1], NULL, 10);
    printf("%d\n", Q(rP));
    return 0;
}