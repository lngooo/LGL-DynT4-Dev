/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A04_F28_S_StackLogic.c
 * Implementation Logic: StackLogic derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int gWh(char *m8fJ) {
    int miHc = 0;
    while (m8fJ[miHc]) miHc++;
    char Egho[100];
    for (int y = 0; y < miHc; y++) Egho[y] = m8fJ[y];
    for (int y = 0; y < miHc; y++) {
        if (m8fJ[y] != Egho[miHc - 1 - y]) return 0;
    }
    return 1;
}

int main(int fW, char *p[]) {
    if (fW < 2) return 1;
    char *m8fJ = p[1];
    int NxCV = gWh(m8fJ);
    printf("%d\n", NxCV);
    return 0;
}