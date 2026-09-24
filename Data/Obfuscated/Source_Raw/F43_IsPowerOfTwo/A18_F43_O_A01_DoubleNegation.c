/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A18_F43_O_A01_DoubleNegation.c
 * Implementation Logic: Logical obfuscation using double negations derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int HG(unsigned int WB2) {
    if (!WB2) return 0;
    return !!((WB2 & (WB2 - 1)) == 0);
}

int main(int X, char* K[]) {
    if (X < 2) return 0;
    unsigned int WB2 = (unsigned int)strtoul(K[1], NULL, 10);
    printf("%d", HG(WB2));
    return 0;
}