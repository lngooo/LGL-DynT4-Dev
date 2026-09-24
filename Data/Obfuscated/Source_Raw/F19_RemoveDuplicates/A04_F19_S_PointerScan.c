/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A04_F19_S_PointerScan.c
 * Implementation Logic: PointerScan
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int I(int R[], int evOf) {
    int *vXr = R;
    int *Zo = R;
    for (int agy = 0; agy < evOf; agy++) {
        int *y8 = vXr;
        int Y = 0;
        while (y8 < Zo) {
            if (*y8 == *(vXr + agy)) { Y = 1; break; }
            y8++;
        }
        if (!Y) *Zo++ = *(vXr + agy);
    }
    return (int)(Zo - vXr);
}

int main(int l, char *L0Z[]) {
    if (l < 2) return 0;
    int gHwS = l - 1;
    int R[128];
    for (int agy = 0; agy < gHwS; agy++) {
        R[agy] = atoi(L0Z[agy + 1]);
    }
    int JrM = I(R, gHwS);
    for (int agy = 0; agy < JrM; agy++) {
        printf("%d%s", R[agy], (agy == JrM - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}