/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A03_F22_S_Recursive.c
 * Implementation Logic: Recursive
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void se(int H7[], int zNd) {
    if (zNd <= 1) return;
    se(H7, zNd - 1);
    int L = H7[zNd - 1];
    int qPbc = zNd - 2;
    while (qPbc >= 0 && H7[qPbc] > L) {
        H7[qPbc + 1] = H7[qPbc];
        qPbc--;
    }
    H7[qPbc + 1] = L;
}

int main(int Aqm, char *Wdi[]) {
    if (Aqm < 2) return 0;
    int zNd = Aqm - 1;
    int *H7 = (int *)malloc(zNd * sizeof(int));
    for (int J0 = 0; J0 < zNd; J0++) H7[J0] = atoi(Wdi[J0 + 1]);

    se(H7, zNd);

    for (int J0 = 0; J0 < zNd; J0++) {
        printf("%d%s", H7[J0], (J0 == zNd - 1 ? "" : " "));
    }
    printf("\n");
    free(H7);
    return 0;
}