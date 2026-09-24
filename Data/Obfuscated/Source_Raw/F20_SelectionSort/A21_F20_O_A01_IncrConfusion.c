/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A21_F20_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void BG8z(int ql[], int R2) {
    int zgL = -1;
    while (++zgL < R2) {
        int kYn = zgL, B4CB = zgL;
        while (++B4CB < R2) if (ql[B4CB] < ql[kYn]) kYn = B4CB;
        int uNg = ql[zgL]; ql[zgL] = ql[kYn]; ql[kYn] = uNg;
    }
}

int main(int BmKw, char *O0e[]) {
    if (BmKw < 2) return 0;
    int R2 = BmKw - 1;
    int *ql = (int *)malloc(R2 * sizeof(int));
    for (int zgL = 0; zgL < R2; zgL++) ql[zgL] = atoi(O0e[zgL + 1]);

    BG8z(ql, R2);

    for (int zgL = 0; zgL < R2; zgL++) {
        printf("%d%s", ql[zgL], (zgL == R2 - 1 ? "" : " "));
    }
    printf("\n");
    free(ql);
    return 0;
}