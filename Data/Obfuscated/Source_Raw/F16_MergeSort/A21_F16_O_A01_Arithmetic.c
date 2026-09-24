/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A21_F16_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Kd(int Az4[], int UVu, int a0r) {
    if (UVu < a0r) {
        int Sz = UVu + (a0r - UVu) / 2;
        Kd(Az4, UVu, Sz);
        Kd(Az4, Sz + 1, a0r);
        int Pn4I = a0r - UVu + 1;
        int *Sw4Z = (int*)malloc(Pn4I * sizeof(int));
        int Xm4t = UVu, c = Sz + 1, yUU = 0;
        while (yUU < Pn4I) {
            int HI = (Xm4t <= Sz && (c > a0r || Az4[Xm4t] <= Az4[c]));
            if (HI) Sw4Z[yUU++] = Az4[Xm4t++];
            else Sw4Z[yUU++] = Az4[c++];
        }
        for (int nfG = 0; nfG < Pn4I; nfG++) Az4[UVu + nfG] = Sw4Z[nfG];
        free(Sw4Z);
    }
}

int main(int HvW, char *bb[]) {
    if (HvW < 2) return 0;
    int Pn4I = HvW - 1;
    int *Az4 = (int *)malloc(Pn4I * sizeof(int));
    for (int Xm4t = 0; Xm4t < Pn4I; Xm4t++) Az4[Xm4t] = atoi(bb[Xm4t + 1]);

    Kd(Az4, 0, Pn4I - 1);

    for (int Xm4t = 0; Xm4t < Pn4I; Xm4t++) {
        printf("%d%s", Az4[Xm4t], (Xm4t == Pn4I - 1 ? "" : " "));
    }
    printf("\n");
    free(Az4);
    return 0;
}