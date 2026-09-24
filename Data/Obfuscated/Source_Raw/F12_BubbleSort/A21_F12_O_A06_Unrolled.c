/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A21_F12_O_A06_Unrolled.c
 * Implementation Logic: Partially unrolled inner loop for bubble sort.
 */
#include <stdio.h>
#include <stdlib.h>

void GSo(int dR[], int CWMK) {
    for (int o = 0; o < CWMK; o++) {
        int sYzj = 0;
        for (; sYzj < CWMK - o - 2; sYzj += 2) {
            if (dR[sYzj] > dR[sYzj + 1]) { int vf = dR[sYzj]; dR[sYzj] = dR[sYzj+1]; dR[sYzj+1] = vf; }
            if (dR[sYzj+1] > dR[sYzj + 2]) { int vf = dR[sYzj+1]; dR[sYzj+1] = dR[sYzj+2]; dR[sYzj+2] = vf; }
        }
        for (; sYzj < CWMK - o - 1; sYzj++) {
            if (dR[sYzj] > dR[sYzj+1]) { int vf = dR[sYzj]; dR[sYzj] = dR[sYzj+1]; dR[sYzj+1] = vf; }
        }
    }
}

int main(int KVdJ, char *qfzG[]) {
    if (KVdJ < 2) return 0;
    int CWMK = KVdJ - 1;
    int *dR = (int*)malloc(CWMK * sizeof(int));
    for (int o = 0; o < CWMK; o++) dR[o] = atoi(qfzG[o+1]);
    GSo(dR, CWMK);
    for (int o = 0; o < CWMK; o++) printf("%d ", dR[o]);
    printf("\n");
    free(dR);
    return 0;
}