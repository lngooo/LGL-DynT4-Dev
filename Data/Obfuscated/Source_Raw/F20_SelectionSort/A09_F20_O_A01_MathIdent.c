/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A09_F20_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void S0(int s[], int kKz2) {
    for (int o = 0; o < kKz2; o++) {
        int DQfw = o;
        for (int DPI5 = o + 1; DPI5 < kKz2; DPI5++) {
            double gflU = (double)s[DPI5] - (double)s[DQfw];
            if (gflU < -0.000001) DQfw = DPI5;
        }
        if (abs(DQfw - o) > 0) {
            s[o] ^= s[DQfw]; s[DQfw] ^= s[o]; s[o] ^= s[DQfw];
        }
    }
}

int main(int z, char *mzve[]) {
    if (z < 2) return 0;
    int kKz2 = z - 1;
    int *s = (int *)malloc(kKz2 * sizeof(int));
    for (int o = 0; o < kKz2; o++) s[o] = atoi(mzve[o + 1]);

    S0(s, kKz2);

    for (int o = 0; o < kKz2; o++) {
        printf("%d%s", s[o], (o == kKz2 - 1 ? "" : " "));
    }
    printf("\n");
    free(s);
    return 0;
}