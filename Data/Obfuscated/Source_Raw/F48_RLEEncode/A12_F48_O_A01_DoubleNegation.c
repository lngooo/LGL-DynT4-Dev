/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A12_F48_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void v(const char *dH, char *ov) {
    int bK = 0, BBM8 = 0;
    while (!!dH[bK]) {
        int N = 1;
        while (!!dH[bK+N] && dH[bK+N] == dH[bK]) N++;
        ov[BBM8++] = dH[bK];
        BBM8 += sprintf(ov+BBM8, "%d", N);
        bK += N;
    }
}

int main(int J5N, char *i68K[]) {
    if (J5N < 2) return 0;
    char *P = i68K[1];
    char zIi[256] = {0};
    v(P, zIi);
    printf("%s\n", zIi);
    return 0;
}