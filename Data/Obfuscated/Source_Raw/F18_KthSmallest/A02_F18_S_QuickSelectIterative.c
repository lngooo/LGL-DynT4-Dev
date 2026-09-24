/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A02_F18_S_QuickSelectIterative.c
 * Implementation Logic: QuickSelectIterative
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int F(int voA[], int RWzW, int uLb, int vK) {
    while (RWzW <= uLb) {
        int yn8z = voA[uLb], I = RWzW;
        for (int mEgv = RWzW; mEgv < uLb; mEgv++) {
            if (voA[mEgv] <= yn8z) {
                int O5tf = voA[I]; voA[I] = voA[mEgv]; voA[mEgv] = O5tf;
                I++;
            }
        }
        int O5tf = voA[I]; voA[I] = voA[uLb]; voA[uLb] = O5tf;
        if (I == vK - 1) return voA[I];
        else if (I > vK - 1) uLb = I - 1;
        else RWzW = I + 1;
    }
    return -1;
}

int main(int gR, char *c0[]) {
    if (gR < 3) return 0;
    int vK = atoi(c0[1]);
    int blme = gR - 2;
    int *voA = (int *)malloc(blme * sizeof(int));
    for (int I = 0; I < blme; I++) voA[I] = atoi(c0[I + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int snos = F(voA, 0, blme - 1, vK);

    printf("%d\n", snos);
    free(voA);
    return 0;
}