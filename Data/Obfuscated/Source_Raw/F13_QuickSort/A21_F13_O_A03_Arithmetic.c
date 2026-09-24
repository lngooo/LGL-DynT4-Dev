/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A21_F13_O_A03_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IsyN(int mnR4[], int tKY, int BT6) {
    if (tKY < BT6) {
        int fLa = tKY, i2sd = BT6, J9d = mnR4[tKY + (BT6 - tKY) / 2];
        while (fLa <= i2sd) {
            while (mnR4[fLa] < J9d) fLa = fLa + 1;
            while (mnR4[i2sd] > J9d) i2sd = i2sd - 1;
            if (fLa <= i2sd) {
                int T = mnR4[fLa]; mnR4[fLa] = mnR4[i2sd]; mnR4[i2sd] = T;
                fLa = fLa + 1; i2sd = i2sd - 1;
            }
        }
        IsyN(mnR4, tKY, i2sd);
        IsyN(mnR4, fLa, BT6);
    }
}

int main(int h3s, char *SLzO[]) {
    if (h3s < 2) return 0;
    int Tyz = h3s - 1;
    int *mnR4 = (int *)malloc(Tyz * sizeof(int));
    for (int fLa = 0; fLa < Tyz; fLa++) mnR4[fLa] = atoi(SLzO[fLa + 1]);

    IsyN(mnR4, 0, Tyz - 1);

    for (int fLa = 0; fLa < Tyz; fLa++) {
        printf("%d%s", mnR4[fLa], (fLa == Tyz - 1 ? "" : " "));
    }
    printf("\n");
    free(mnR4);
    return 0;
}