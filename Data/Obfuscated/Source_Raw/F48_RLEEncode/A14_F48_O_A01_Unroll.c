/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A14_F48_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void zga(const char *F, char *FmPk) {
    int doA = 0, W = 0;
    while (F[doA]) {
        int cj = 1;
        if (F[doA+1] == F[doA]) {
            cj = 2;
            while (F[doA+cj] == F[doA]) cj++;
        }
        FmPk[W++] = F[doA];
        W += sprintf(FmPk + W, "%d", cj);
        doA += cj;
    }
}

int main(int NV1, char *L[]) {
    if (NV1 < 2) return 0;
    char *HE = L[1];
    char nD[256] = {0};
    zga(HE, nD);
    printf("%s\n", nD);
    return 0;
}