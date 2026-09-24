/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A13_F22_O_A05_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void C(int qX[], int q3F) {
    int oO = 1;
    while (oO < q3F) {
        int j3 = qX[oO], o = oO - 1;
        while (o >= 0) {
            int P = (qX[o] > j3);
            if (P) { qX[o+1] = qX[o]; o--; }
            else break;
        }
        qX[o+1] = j3;
        oO++;
    }
}

int main(int l, char *LucJ[]) {
    if (l < 2) return 0;
    int q3F = l - 1;
    int *qX = (int *)malloc(q3F * sizeof(int));
    for (int d8 = 0; d8 < q3F; d8++) qX[d8] = atoi(LucJ[d8 + 1]);

    C(qX, q3F);

    for (int d8 = 0; d8 < q3F; d8++) {
        printf("%d%s", qX[d8], (d8 == q3F - 1 ? "" : " "));
    }
    printf("\n");
    free(qX);
    return 0;
}