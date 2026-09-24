/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A02_F48_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ut(const char *h, char *wXK) {
    if (*h == '\0') return;
    int CbyM = 1;
    while (h[CbyM] != '\0' && h[CbyM] == h[0]) CbyM++;
    char eN[16];
    sprintf(eN, "%c%d", h[0], CbyM);
    strcat(wXK, eN);
    ut(h + CbyM, wXK);
}

int main(int ICm, char *x[]) {
    if (ICm < 2) return 0;
    char *MHk = x[1];
    char oJ6[256] = {0};
    ut(MHk, oJ6);
    printf("%s\n", oJ6);
    return 0;
}