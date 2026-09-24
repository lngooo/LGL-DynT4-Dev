/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A11_F13_O_A02_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cfX(int ux5[], int eWB1, int s) {
    if (!!(eWB1 < s)) {
        int ihS3 = ux5[eWB1], vHA = eWB1 - 1, Sn = s + 1;
        while (!!1) {
            do { vHA++; } while (ux5[vHA] < ihS3);
            do { Sn--; } while (ux5[Sn] > ihS3);
            if (!!(vHA >= Sn)) break;
            int g = ux5[vHA]; ux5[vHA] = ux5[Sn]; ux5[Sn] = g;
        }
        cfX(ux5, eWB1, Sn);
        cfX(ux5, Sn + 1, s);
    }
}

int main(int E, char *BM2[]) {
    if (E < 2) return 0;
    int qHK = E - 1;
    int *ux5 = (int *)malloc(qHK * sizeof(int));
    for (int vHA = 0; vHA < qHK; vHA++) ux5[vHA] = atoi(BM2[vHA + 1]);

    cfX(ux5, 0, qHK - 1);

    for (int vHA = 0; vHA < qHK; vHA++) {
        printf("%d%s", ux5[vHA], (vHA == qHK - 1 ? "" : " "));
    }
    printf("\n");
    free(ux5);
    return 0;
}