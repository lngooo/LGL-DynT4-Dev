/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A20_F26_O_A01_PointerInc.c
 * Implementation Logic: Incrementing the base pointer.
 */
#include <stdio.h>

int xL(const char *zTVc) {
    int PYC = 0;
    while (*(zTVc++)) PYC++;
    return PYC;
}

int main(int K3Hc, char *ZOVX[]) {
    if (K3Hc < 2) return 0;
    printf("%d\n", xL(ZOVX[1]));
    return 0;
}