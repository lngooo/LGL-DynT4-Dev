/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A06_F35_O_A01_Goto.c
 * Logic: Iteration logic reconstructed with goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

int rt3k(const char* FT) {
    int GvV = 0;
    int IOv = 0;
xY3u:
    if (FT[IOv] == '\0') goto lGi;
    char N6h = FT[IOv];
    if (N6h == 'a') goto Z;
    if (N6h == 'e') goto Z;
    if (N6h == 'i') goto Z;
    if (N6h == 'o') goto Z;
    if (N6h == 'u') goto Z;
    if (N6h == 'A') goto Z;
    if (N6h == 'E') goto Z;
    if (N6h == 'I') goto Z;
    if (N6h == 'O') goto Z;
    if (N6h == 'U') goto Z;
    goto vbi7;
Z:
    GvV++;
vbi7:
    IOv++;
    goto xY3u;
lGi:
    return GvV;
}

int main(int j, char* xOo[]) {
    if (j < 2) { printf("0\n"); return 0; }
    printf("%d\n", rt3k(xOo[1]));
    return 0;
}