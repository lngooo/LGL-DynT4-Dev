/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A12_F43_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into two components derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    unsigned int n_high = n & 0xFFFF0000;
    unsigned int n_low = n & 0x0000FFFF;
    unsigned int reconstructed = n_high | n_low;
    if (reconstructed == 0) return 0;
    return (reconstructed & (reconstructed - 1)) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}