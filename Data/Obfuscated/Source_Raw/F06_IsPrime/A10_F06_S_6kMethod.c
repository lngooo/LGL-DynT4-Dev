/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A10_F06_S_6kMethod.c
 * Implementation Logic: Efficient 6k +/- 1 wheel optimization (Seed 5).
 */
#include <stdio.h>
#include <stdlib.h>

int Vh(int pSMT) {
    if (pSMT <= 3) return pSMT > 1;
    if (pSMT % 2 == 0 || pSMT % 3 == 0) return 0;
    int z6 = 5;
    while (z6 * z6 <= pSMT) {
        if (pSMT % z6 == 0 || pSMT % (z6 + 2) == 0) return 0;
        z6 += 6;
    }
    return 1;
}

int main(int Ju, char *yDI[]) {
    if (Ju < 2) return 1;
    printf("%d\n", Vh(atoi(yDI[1])));
    return 0;
}