/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A15_F43_O_A02_WhileToFor.c
 * Implementation Logic: Loop transformation (while to for) and condition negation derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    for (; !(n % 2 != 0); n >>= 1) {
        // Empty body
    }
    return n == 1;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}