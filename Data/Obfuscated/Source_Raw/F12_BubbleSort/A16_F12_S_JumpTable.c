/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A16_F12_S_JumpTable.c
 * Implementation Logic: Bubble sort with comparison leading to computed goto (Seed 8).
 */
#include <stdio.h>
#include <stdlib.h>

void m(int F[], int gc) {
    void *QFHN[] = {&&dxo, &&a};
    for (int PF = 0; PF < gc - 1; PF++) {
        for (int D = 0; D < gc - PF - 1; D++) {
            goto *QFHN[F[D] > F[D + 1]];
        a:
            { int x = F[D]; F[D] = F[D+1]; F[D+1] = x; }
        dxo:
            continue;
        }
    }
}

int main(int xYTd, char *HcU[]) {
    if (xYTd < 2) return 0;
    int gc = xYTd - 1;
    int *F = (int*)malloc(gc * sizeof(int));
    for (int PF = 0; PF < gc; PF++) F[PF] = atoi(HcU[PF+1]);
    m(F, gc);
    for (int PF = 0; PF < gc; PF++) printf("%d ", F[PF]);
    printf("\n");
    free(F);
    return 0;
}