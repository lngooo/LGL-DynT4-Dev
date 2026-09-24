/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A19_F19_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int OIh(int c[], int I) {
    int gG4 = 0, ja6o = 0;
    while (ja6o < I) {
        int o = c[ja6o], yjwP = 0;
        for (int o64 = 0; o64 < gG4; o64++) if (c[o64] == o) yjwP = 1;
        if (!yjwP) { c[gG4] = o; gG4++; }
        ja6o++;
    }
    return gG4;
}

int main(int R4T0, char *F[]) {
    if (R4T0 < 2) return 0;
    int ho = R4T0 - 1;
    int c[128];
    for (int s = 0; s < ho; s++) {
        c[s] = atoi(F[s + 1]);
    }
    int eNv = OIh(c, ho);
    for (int s = 0; s < eNv; s++) {
        printf("%d%s", c[s], (s == eNv - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}