/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A07_F26_O_A01_Goto.c
 * Implementation Logic: StrLen with labels and goto.
 */
#include <stdio.h>

int aKE(const char *wmO3) {
    int CnDN = 0;
ICh:
    if (*wmO3 == '\0') goto PXG;
    wmO3++; CnDN++;
    goto ICh;
PXG:
    return CnDN;
}

int main(int v5l, char *vZ3[]) {
    if (v5l < 2) return 0;
    printf("%d\n", aKE(vZ3[1]));
    return 0;
}