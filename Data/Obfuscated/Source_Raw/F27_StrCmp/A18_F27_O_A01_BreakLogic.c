/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A18_F27_O_A01_BreakLogic.c
 * Implementation Logic: Infinite loop with internal conditional breaks derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int HKK(const char *WIPm, const char *uiC) {
    while (1) {
        if (*WIPm == '\0' || *WIPm != *uiC) break;
        WIPm++; uiC++;
    }
    return *(unsigned char *)WIPm - *(unsigned char *)uiC;
}

int main(int s8, char *zByf[]) {
    if (s8 < 3) return 0;
    printf("%d\n", HKK(zByf[1], zByf[2]));
    return 0;
}