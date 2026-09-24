/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A13_F43_O_A06_InstrReplace.c
 * Implementation Logic: Instruction replacement using bitwise shifts instead of division derived from A06.
 */
#include <stdio.h>
#include <stdlib.h>

int h(unsigned int I) {
    unsigned int EoK = 1U << 31;
    if (I == 0) return 0;
    // Check if max_v is divisible by n using identity: a % b == 0
    return (I > 0 && (EoK / I) * I == EoK);
}

int main(int RT, char* kgT[]) {
    if (RT < 2) return 0;
    unsigned int I = (unsigned int)strtoul(kgT[1], NULL, 10);
    printf("%d", h(I));
    return 0;
}