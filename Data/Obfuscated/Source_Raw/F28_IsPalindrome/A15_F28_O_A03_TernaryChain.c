/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A15_F28_O_A03_TernaryChain.c
 * Implementation Logic: TernaryChain derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int w(char *bN5L) {
    int kx2q = 0; while (bN5L[kx2q]) kx2q++;
    for (int Gr = 0; Gr < kx2q / 2; Gr++) {
        int F = (bN5L[Gr] == bN5L[kx2q - 1 - Gr]) ? 1 : 0;
        if (!F) return 0;
    }
    return 1;
}

int main(int kdP, char *St[]) {
    if (kdP < 2) return 1;
    char *bN5L = St[1];
    int CBv = w(bN5L);
    printf("%d\n", CBv);
    return 0;
}