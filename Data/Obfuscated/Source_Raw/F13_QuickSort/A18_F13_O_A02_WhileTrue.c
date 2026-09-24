/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A18_F13_O_A02_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void W(int Kif0[], int gDtR, int Eo8o) {
    if (gDtR >= Eo8o) return;
    int Nq = Kif0[gDtR], zlS = gDtR - 1, Y34 = Eo8o + 1;
    while (1) {
        while (1) { zlS++; if (Kif0[zlS] >= Nq) break; }
        while (1) { Y34--; if (Kif0[Y34] <= Nq) break; }
        if (zlS >= Y34) break;
        int DFb = Kif0[zlS]; Kif0[zlS] = Kif0[Y34]; Kif0[Y34] = DFb;
    }
    W(Kif0, gDtR, Y34);
    W(Kif0, Y34 + 1, Eo8o);
}

int main(int E, char *w[]) {
    if (E < 2) return 0;
    int D2ks = E - 1;
    int *Kif0 = (int *)malloc(D2ks * sizeof(int));
    for (int zlS = 0; zlS < D2ks; zlS++) Kif0[zlS] = atoi(w[zlS + 1]);

    W(Kif0, 0, D2ks - 1);

    for (int zlS = 0; zlS < D2ks; zlS++) {
        printf("%d%s", Kif0[zlS], (zlS == D2ks - 1 ? "" : " "));
    }
    printf("\n");
    free(Kif0);
    return 0;
}