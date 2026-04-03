/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A13_F43_O_A06_InstrReplace.c
 * Implementation Logic: Instruction replacement using bitwise shifts instead of division derived from A06.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    unsigned int max_v = 1U << 31;
    if (n == 0) return 0;
    // Check if max_v is divisible by n using identity: a % b == 0
    return (n > 0 && (max_v / n) * n == max_v);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}