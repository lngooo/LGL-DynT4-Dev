/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A06_F44_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG structure.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t y(uint32_t qe0) {
    uint32_t ec5g;
    uint8_t *uO5n = (uint8_t *)&qe0;
    uint8_t *I30 = (uint8_t *)&ec5g;
    int A1q = 0;
c:
    if (A1q >= 4) goto QJ;
    I30[A1q] = uO5n[3 - A1q];
    A1q++;
    goto c;
QJ:
    return ec5g;
}

int main(int naqj, char* AnBi[]) {
    if (naqj < 2) return 0;
    uint32_t q = (uint32_t)strtoul(AnBi[1], NULL, 10);
    printf("%u\n", y(q));
    return 0;
}