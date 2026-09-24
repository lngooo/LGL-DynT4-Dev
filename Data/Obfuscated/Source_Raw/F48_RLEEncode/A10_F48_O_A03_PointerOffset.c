/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A10_F48_O_A03_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void athp(const char *Hld, char *M0p) {
    char *u = (char*)Hld;
    int MH = 0;
    while (*(u)) {
        int WM = 0;
        char za = *u;
        while (*(u + WM) == za) WM++;
        *(M0p + MH++) = za;
        MH += sprintf(M0p + MH, "%d", WM);
        u += WM;
    }
    M0p[MH] = 0;
}

int main(int a, char *s[]) {
    if (a < 2) return 0;
    char *dPQ = s[1];
    char zj1N[256] = {0};
    athp(dPQ, zj1N);
    printf("%s\n", zj1N);
    return 0;
}