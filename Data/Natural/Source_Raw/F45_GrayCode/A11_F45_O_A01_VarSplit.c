/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A11_F45_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into high/low parts derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int n_h = n & 0xFFFF0000;
    unsigned int n_l = n & 0x0000FFFF;
    unsigned int s = (n_h | n_l) >> 1;
    return (n_h | n_l) ^ s;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}