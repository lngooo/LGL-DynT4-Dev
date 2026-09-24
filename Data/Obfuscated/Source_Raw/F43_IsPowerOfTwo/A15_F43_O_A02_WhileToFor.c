/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A15_F43_O_A02_WhileToFor.c
 * Implementation Logic: Loop transformation (while to for) and condition negation derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int OTK(unsigned int WHi) {
    if (WHi == 0) return 0;
    for (; !(WHi % 2 != 0); WHi >>= 1) {
        // Empty body
    }
    return WHi == 1;
}

int main(int L, char* l[]) {
    if (L < 2) return 0;
    unsigned int WHi = (unsigned int)strtoul(l[1], NULL, 10);
    printf("%d", OTK(WHi));
    return 0;
}