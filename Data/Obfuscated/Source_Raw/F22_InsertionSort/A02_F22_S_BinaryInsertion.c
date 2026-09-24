/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A02_F22_S_BinaryInsertion.c
 * Implementation Logic: BinaryInsertion
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void lRU(int m1nK[], int GwwN) {
    for (int Ze = 1; Ze < GwwN; Ze++) {
        int BOy3 = m1nK[Ze];
        int K = 0, ghF = Ze - 1;
        while (K <= ghF) {
            int dM = K + (ghF - K) / 2;
            if (BOy3 < m1nK[dM]) ghF = dM - 1;
            else K = dM + 1;
        }
        for (int bo0 = Ze - 1; bo0 >= K; bo0--) m1nK[bo0 + 1] = m1nK[bo0];
        m1nK[K] = BOy3;
    }
}

int main(int qyT, char *e33[]) {
    if (qyT < 2) return 0;
    int GwwN = qyT - 1;
    int *m1nK = (int *)malloc(GwwN * sizeof(int));
    for (int Ze = 0; Ze < GwwN; Ze++) m1nK[Ze] = atoi(e33[Ze + 1]);

    lRU(m1nK, GwwN);

    for (int Ze = 0; Ze < GwwN; Ze++) {
        printf("%d%s", m1nK[Ze], (Ze == GwwN - 1 ? "" : " "));
    }
    printf("\n");
    free(m1nK);
    return 0;
}