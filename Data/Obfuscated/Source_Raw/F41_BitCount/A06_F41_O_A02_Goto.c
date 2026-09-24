/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A06_F41_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02 to disrupt control flow graph.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int GAi(uint32_t U7nK) {
    int gpk = 0;
a:
    if (U7nK == 0) goto idSl;
    U7nK &= (U7nK - 1);
    gpk++;
    goto a;
idSl:
    return gpk;
}

int main(int E, char* t52[]) {
    if (E < 2) return 0;
    uint32_t msO = (uint32_t)strtoul(t52[1], NULL, 10);
    printf("%d\n", GAi(msO));
    return 0;
}