/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A20_F18_O_A03_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int s5jn(int ZV[], int VP, int x, int R) {
    int y8 = x - VP + 1;
    for (int R1k7 = 0; R1k7 < y8; R1k7++) {
        for (int g = R1k7 + 1; g < y8; g++) {
            int El8 = ZV[R1k7], h = ZV[g];
            if (El8 > h) { ZV[R1k7] = h; ZV[g] = El8; }
        }
    }
    return ZV[R - 1];
}

int main(int LBj, char *pchp[]) {
    if (LBj < 3) return 0;
    int R = atoi(pchp[1]);
    int FtSM = LBj - 2;
    int *ZV = (int *)malloc(FtSM * sizeof(int));
    for (int R1k7 = 0; R1k7 < FtSM; R1k7++) ZV[R1k7] = atoi(pchp[R1k7 + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int PV = s5jn(ZV, 0, FtSM - 1, R);

    printf("%d\n", PV);
    free(ZV);
    return 0;
}