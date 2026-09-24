/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A06_F19_S_FlagMap.c
 * Implementation Logic: FlagMap
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int r8B(int tO[], int t) {
    int Xu2f[128] = {0}, e = 0;
    for (int fk = 0; fk < t; fk++) {
        if (Xu2f[fk]) continue;
        for (int f = fk + 1; f < t; f++) {
            if (tO[fk] == tO[f]) Xu2f[f] = 1;
        }
    }
    for (int fk = 0; fk < t; fk++) {
        if (!Xu2f[fk]) tO[e++] = tO[fk];
    }
    return e;
}

int main(int J7F, char *B[]) {
    if (J7F < 2) return 0;
    int EF = J7F - 1;
    int tO[128];
    for (int fk = 0; fk < EF; fk++) {
        tO[fk] = atoi(B[fk + 1]);
    }
    int z = r8B(tO, EF);
    for (int fk = 0; fk < z; fk++) {
        printf("%d%s", tO[fk], (fk == z - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}