/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A16_F18_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int w(int EQ2S[], int U, int sMmT, int H4) {
    if (U <= sMmT) {
        if ((U * sMmT + 1) != 0x7FFFFFFF) {
            int Yft1 = EQ2S[sMmT], k5C9 = U;
            for (int E = U; E < sMmT; E++) if (EQ2S[E] <= Yft1) { int pn=EQ2S[k5C9]; EQ2S[k5C9]=EQ2S[E]; EQ2S[E]=pn; k5C9++; }
            int pn=EQ2S[k5C9]; EQ2S[k5C9]=EQ2S[sMmT]; EQ2S[sMmT]=pn;
            if (k5C9 == H4 - 1) return EQ2S[k5C9];
            return (k5C9 > H4 - 1) ? w(EQ2S, U, k5C9 - 1, H4) : w(EQ2S, k5C9 + 1, sMmT, H4);
        }
    }
    return -1;
}

int main(int W8, char *g[]) {
    if (W8 < 3) return 0;
    int H4 = atoi(g[1]);
    int Tbk7 = W8 - 2;
    int *EQ2S = (int *)malloc(Tbk7 * sizeof(int));
    for (int k5C9 = 0; k5C9 < Tbk7; k5C9++) EQ2S[k5C9] = atoi(g[k5C9 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int yXr = w(EQ2S, 0, Tbk7 - 1, H4);

    printf("%d\n", yXr);
    free(EQ2S);
    return 0;
}