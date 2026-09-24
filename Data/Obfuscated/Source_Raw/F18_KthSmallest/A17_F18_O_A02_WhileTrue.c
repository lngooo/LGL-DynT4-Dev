/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A17_F18_O_A02_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Uq(int QhQi[], int fYSv, int KX, int P) {
    while (1) {
        if (fYSv > KX) break;
        int y6T = QhQi[KX], PPYJ = fYSv;
        for (int Zooq = fYSv; Zooq < KX; Zooq++) if (QhQi[Zooq] <= y6T) { int s=QhQi[PPYJ]; QhQi[PPYJ]=QhQi[Zooq]; QhQi[Zooq]=s; PPYJ++; }
        int s=QhQi[PPYJ]; QhQi[PPYJ]=QhQi[KX]; QhQi[KX]=s;
        if (PPYJ == P - 1) return QhQi[PPYJ];
        if (PPYJ > P - 1) KX = PPYJ - 1; else fYSv = PPYJ + 1;
    }
    return -1;
}

int main(int h, char *v[]) {
    if (h < 3) return 0;
    int P = atoi(v[1]);
    int V8 = h - 2;
    int *QhQi = (int *)malloc(V8 * sizeof(int));
    for (int PPYJ = 0; PPYJ < V8; PPYJ++) QhQi[PPYJ] = atoi(v[PPYJ + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int K = Uq(QhQi, 0, V8 - 1, P);

    printf("%d\n", K);
    free(QhQi);
    return 0;
}