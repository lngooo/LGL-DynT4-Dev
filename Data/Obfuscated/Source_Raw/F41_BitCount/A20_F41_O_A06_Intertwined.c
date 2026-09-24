/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A20_F41_O_A06_Intertwined.c
 * Implementation Logic: Intertwined control flow derived from A06, adding redundant labels and dummy jumps.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int Q(uint32_t D) {
    int F = 0;
    if (D == 0) goto ScZ;
Mj:
    D &= (D - 1);
    F++;
    if (D != 0) goto Mj;
    goto ScZ;
gLN:
    F--; // Never reached
ScZ:
    return F;
}

int main(int Swl, char* V45[]) {
    if (Swl < 2) return 0;
    uint32_t l = (uint32_t)strtoul(V45[1], NULL, 10);
    printf("%d\n", Q(l));
    return 0;
}