/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A17_F25_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double oQn(int tk[], int ro76) {
    double Xw = 0, h18y = 0;
    for (int C = 0; C < ro76; C++) {
        if (C % 2 == 0) Xw += tk[C];
        else h18y += tk[C];
    }
    return (Xw + h18y) / ro76;
}

int main(int yd, char *Czmn[]) {
    if (yd < 2) return 0;
    int ro76 = yd - 1;
    int *tk = (int *)malloc(ro76 * sizeof(int));
    for (int C = 0; C < ro76; C++) tk[C] = atoi(Czmn[C + 1]);

    double L0hf = oQn(tk, ro76);
    printf("%.2f\n", L0hf);

    free(tk);
    return 0;
}