/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A05_F26_S_Recursive_Tail.c
 * Implementation Logic: Tail-recursive length (Seed 4).
 */
#include <stdio.h>

int oq(const char *UQ, int vTD) {
    return (*UQ == '\0') ? vTD : oq(UQ + 1, vTD + 1);
}

int W5i(const char *UQ) {
    return oq(UQ, 0);
}

int main(int BxQ, char *LV[]) {
    if (BxQ < 2) return 0;
    printf("%d\n", W5i(LV[1]));
    return 0;
}