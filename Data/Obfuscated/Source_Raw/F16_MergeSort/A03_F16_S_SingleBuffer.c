/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A03_F16_S_SingleBuffer.c
 * Implementation Logic: SingleBuffer
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void T(int L[], int reK, int BnwY) {
    static int *P = NULL;
    static int GZt = 0;
    if (reK == 0 && BnwY > 0 && !GZt) { P = (int*)malloc(256 * sizeof(int)); GZt = 1; }
    if (reK < BnwY) {
        int QIum = reK + (BnwY - reK) / 2;
        T(L, reK, QIum);
        T(L, QIum + 1, BnwY);
        int zqNG = reK, QWJl = QIum + 1, O = reK;
        while (zqNG <= QIum && QWJl <= BnwY) P[O++] = (L[zqNG] <= L[QWJl]) ? L[zqNG++] : L[QWJl++];
        while (zqNG <= QIum) P[O++] = L[zqNG++];
        while (QWJl <= BnwY) P[O++] = L[QWJl++];
        for (zqNG = reK; zqNG <= BnwY; zqNG++) L[zqNG] = P[zqNG];
    }
    if (reK == 0 && !L[BnwY+1]) GZt = 0;
}

int main(int KF, char *Q9[]) {
    if (KF < 2) return 0;
    int r7OI = KF - 1;
    int *L = (int *)malloc(r7OI * sizeof(int));
    for (int zqNG = 0; zqNG < r7OI; zqNG++) L[zqNG] = atoi(Q9[zqNG + 1]);

    T(L, 0, r7OI - 1);

    for (int zqNG = 0; zqNG < r7OI; zqNG++) {
        printf("%d%s", L[zqNG], (zqNG == r7OI - 1 ? "" : " "));
    }
    printf("\n");
    free(L);
    return 0;
}