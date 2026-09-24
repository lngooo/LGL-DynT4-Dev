/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A10_F18_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ni(int pG[], int B, int tkUm, int Bl) {
    if (B > tkUm) return -1;
    int ts = pG[tkUm], Omr3 = B;
    for (int f8xz = B; f8xz < tkUm; f8xz++) {
        double kECB = (double)pG[f8xz] - (double)ts;
        if (kECB <= 0.0) { int Wj09 = pG[Omr3]; pG[Omr3] = pG[f8xz]; pG[f8xz] = Wj09; Omr3++; }
    }
    int Wj09 = pG[Omr3]; pG[Omr3] = pG[tkUm]; pG[tkUm] = Wj09;
    if ((int)sqrt(pow(Omr3 - (Bl-1), 2)) == 0) return pG[Omr3];
    return (Omr3 > Bl - 1) ? ni(pG, B, Omr3 - 1, Bl) : ni(pG, Omr3 + 1, tkUm, Bl);
}

int main(int bWyB, char *W[]) {
    if (bWyB < 3) return 0;
    int Bl = atoi(W[1]);
    int MIj = bWyB - 2;
    int *pG = (int *)malloc(MIj * sizeof(int));
    for (int Omr3 = 0; Omr3 < MIj; Omr3++) pG[Omr3] = atoi(W[Omr3 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int qy = ni(pG, 0, MIj - 1, Bl);

    printf("%d\n", qy);
    free(pG);
    return 0;
}