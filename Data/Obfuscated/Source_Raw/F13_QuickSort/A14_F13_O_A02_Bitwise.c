/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A14_F13_O_A02_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void KUR(int JIb[], int KR, int Z64) {
    if (KR < Z64) {
        int ejr = JIb[KR], v = KR - 1, OI1k = Z64 + 1;
        while (!(0)) {
            while (JIb[++v] < ejr);
            while (JIb[--OI1k] > ejr);
            if (!(v < OI1k)) break;
            JIb[v] ^= JIb[OI1k]; JIb[OI1k] ^= JIb[v]; JIb[v] ^= JIb[OI1k];
        }
        KUR(JIb, KR, OI1k);
        KUR(JIb, OI1k + 1, Z64);
    }
}

int main(int lMh3, char *T2u[]) {
    if (lMh3 < 2) return 0;
    int r = lMh3 - 1;
    int *JIb = (int *)malloc(r * sizeof(int));
    for (int v = 0; v < r; v++) JIb[v] = atoi(T2u[v + 1]);

    KUR(JIb, 0, r - 1);

    for (int v = 0; v < r; v++) {
        printf("%d%s", JIb[v], (v == r - 1 ? "" : " "));
    }
    printf("\n");
    free(JIb);
    return 0;
}