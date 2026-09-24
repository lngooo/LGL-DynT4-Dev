/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A12_F13_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void iNK(int HUOF[], int Zl4N, int Ts) {
    if (Zl4N >= Ts) return;
    int ah = Zl4N, D = Ts, V = HUOF[(Zl4N+Ts)/2];
    for (; ah <= D; ) {
        for (; HUOF[ah] < V; ) ah++;
        for (; HUOF[D] > V; ) D--;
        if (ah <= D) { int ZN = HUOF[ah]; HUOF[ah] = HUOF[D]; HUOF[D] = ZN; ah++; D--; }
    }
    if (Zl4N < D) iNK(HUOF, Zl4N, D);
    if (ah < Ts) iNK(HUOF, ah, Ts);
}

int main(int Acvw, char *aO[]) {
    if (Acvw < 2) return 0;
    int Ss = Acvw - 1;
    int *HUOF = (int *)malloc(Ss * sizeof(int));
    for (int ah = 0; ah < Ss; ah++) HUOF[ah] = atoi(aO[ah + 1]);

    iNK(HUOF, 0, Ss - 1);

    for (int ah = 0; ah < Ss; ah++) {
        printf("%d%s", HUOF[ah], (ah == Ss - 1 ? "" : " "));
    }
    printf("\n");
    free(HUOF);
    return 0;
}