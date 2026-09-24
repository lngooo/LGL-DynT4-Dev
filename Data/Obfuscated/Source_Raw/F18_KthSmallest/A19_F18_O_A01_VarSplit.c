/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A19_F18_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int j0T(int U7[], int SV, int X, int FU) {
    int t0Q6 = SV, bJ = X;
    if (t0Q6 > bJ) return -1;
    int vBRE = U7[bJ], Wzz = t0Q6;
    for (int H = t0Q6; H < bJ; H++) {
        if (U7[H] <= vBRE) { int sS7 = U7[Wzz]; U7[Wzz] = U7[H]; U7[H] = sS7; Wzz++; }
    }
    int sS7 = U7[Wzz]; U7[Wzz] = U7[bJ]; U7[bJ] = sS7;
    if (Wzz == FU - 1) return U7[Wzz];
    return (Wzz > FU - 1) ? j0T(U7, t0Q6, Wzz - 1, FU) : j0T(U7, Wzz + 1, bJ, FU);
}

int main(int S2, char *giuW[]) {
    if (S2 < 3) return 0;
    int FU = atoi(giuW[1]);
    int T = S2 - 2;
    int *U7 = (int *)malloc(T * sizeof(int));
    for (int DPk = 0; DPk < T; DPk++) U7[DPk] = atoi(giuW[DPk + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int CS = j0T(U7, 0, T - 1, FU);

    printf("%d\n", CS);
    free(U7);
    return 0;
}