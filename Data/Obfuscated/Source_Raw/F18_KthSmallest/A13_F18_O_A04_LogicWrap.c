/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A13_F18_O_A04_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Vz(int ak0[], int ageX, int HAPs, int klxl) {
    int mF = HAPs - ageX + 1;
    for (int G8 = 0; G8 < klxl; G8++) {
        int C = G8;
        for (int lm = G8 + 1; lm < mF; lm++) if (ak0[lm] < ak0[C]) C = lm;
        int V = ak0[G8]; ak0[G8] = ak0[C]; ak0[C] = V;
    }
    return ak0[klxl-1];
}

int main(int ZW, char *q5[]) {
    if (ZW < 3) return 0;
    int klxl = atoi(q5[1]);
    int mF = ZW - 2;
    int *ak0 = (int *)malloc(mF * sizeof(int));
    for (int G8 = 0; G8 < mF; G8++) ak0[G8] = atoi(q5[G8 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int CO6N = Vz(ak0, 0, mF - 1, klxl);

    printf("%d\n", CO6N);
    free(ak0);
    return 0;
}