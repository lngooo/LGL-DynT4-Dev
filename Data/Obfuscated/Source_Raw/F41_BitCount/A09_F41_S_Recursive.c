/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A09_F41_S_Recursive.c
 * Implementation Logic: Recursive bit counting using Brian Kernighan's base case.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int K(uint32_t eq) {
    if (eq == 0) return 0;
    return 1 + K(eq & (eq - 1));
}

int main(int Jtm, char* Suz[]) {
    if (Jtm < 2) return 0;
    uint32_t ofeo = (uint32_t)strtoul(Suz[1], NULL, 10);
    printf("%d\n", K(ofeo));
    return 0;
}