/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A01_F28_S_TwoPointer.c
 * Implementation Logic: TwoPointer derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int nKON(char *c) {
    int n5Sh = 0;
    while (c[n5Sh]) n5Sh++;
    int a5p = 0, ly0 = n5Sh - 1;
    while (a5p < ly0) {
        if (c[a5p] != c[ly0]) return 0;
        a5p++; ly0--;
    }
    return 1;
}

int main(int x6, char *cjjM[]) {
    if (x6 < 2) return 1;
    char *c = cjjM[1];
    int NQ = nKON(c);
    printf("%d\n", NQ);
    return 0;
}