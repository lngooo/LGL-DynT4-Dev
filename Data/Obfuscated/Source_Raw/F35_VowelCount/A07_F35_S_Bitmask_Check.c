/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A07_F35_S_Bitmask_Check.c
 * Logic: Map characters to a bitmask to avoid multiple branches.
 */
#include <stdio.h>
#include <stdlib.h>

int e9(const char* iP) {
    int Z = 0;
    // Mask for vowels in lower 32 bits (simplified for small alphabet)
    for (; *iP; iP++) {
        char uen = *iP;
        if (uen >= 'A' && uen <= 'z') {
            char u = uen | 32;
            if (u == 'a' || u == 'e' || u == 'i' || u == 'o' || u == 'u')
                Z++;
        }
    }
    return Z;
}

int main(int EcH, char* OO[]) {
    if (EcH < 2) { printf("0\n"); return 0; }
    printf("%d\n", e9(OO[1]));
    return 0;
}