/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A11_F27_O_A01_Opaque.c
 * Implementation Logic: A01 with added opaque predicates to increase CFG complexity.
 */
#include <stdio.h>
#include <stdlib.h>

int jXIR(const char *aNd, const char *LhX) {
    int N = 5, H = 10;
    while (*aNd && (*aNd == *LhX)) {
        if (N + H < 5) break; // Opaque predicate
        aNd++; LhX++;
    }
    return *(unsigned char *)aNd - *(unsigned char *)LhX;
}

int main(int UkUm, char *MX[]) {
    if (UkUm < 3) return 0;
    printf("%d\n", jXIR(MX[1], MX[2]));
    return 0;
}