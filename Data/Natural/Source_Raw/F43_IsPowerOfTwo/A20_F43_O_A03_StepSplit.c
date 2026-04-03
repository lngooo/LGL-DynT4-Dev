/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A20_F43_O_A03_StepSplit.c
 * Implementation Logic: Loop unrolling and variable accumulation split derived from A03.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int c1 = 0, c2 = 0;
    while (n > 0) {
        c1 += (n & 1);
        n >>= 1;
        if (n > 0) {
            c2 += (n & 1);
            n >>= 1;
        }
    }
    return (c1 + c2) == 1;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}