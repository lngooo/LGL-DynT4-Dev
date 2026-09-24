/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A02_F13_S_HoarePartition.c
 * Implementation Logic: HoarePartition
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mR(int jWU[], int h, int p) {
    if (h < p) {
        int sa = jWU[h];
        int SZh = h - 1, CEb = p + 1;
        while (1) {
            do { SZh++; } while (jWU[SZh] < sa);
            do { CEb--; } while (jWU[CEb] > sa);
            if (SZh >= CEb) break;
            int nVI = jWU[SZh]; jWU[SZh] = jWU[CEb]; jWU[CEb] = nVI;
        }
        mR(jWU, h, CEb);
        mR(jWU, CEb + 1, p);
    }
}

int main(int nI, char *JEN[]) {
    if (nI < 2) return 0;
    int SS = nI - 1;
    int *jWU = (int *)malloc(SS * sizeof(int));
    for (int SZh = 0; SZh < SS; SZh++) jWU[SZh] = atoi(JEN[SZh + 1]);

    mR(jWU, 0, SS - 1);

    for (int SZh = 0; SZh < SS; SZh++) {
        printf("%d%s", jWU[SZh], (SZh == SS - 1 ? "" : " "));
    }
    printf("\n");
    free(jWU);
    return 0;
}