/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A18_F16_O_A03_StackSim.c
 * Implementation Logic: StackSim
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void A18R(int YEZ[], int Nn, int SVf) {
    if (Nn >= SVf) return;
    int ilmk = Nn + (SVf - Nn) / 2;
    A18R(YEZ, Nn, ilmk);
    A18R(YEZ, ilmk + 1, SVf);
    int gYA8[256], tpnJ = Nn, b = ilmk + 1, qwR = Nn;
    while (tpnJ <= ilmk || b <= SVf) {
        if (tpnJ <= ilmk && (b > SVf || YEZ[tpnJ] <= YEZ[b])) gYA8[qwR++] = YEZ[tpnJ++];
        else gYA8[qwR++] = YEZ[b++];
    }
    for (int l0 = Nn; l0 <= SVf; l0++) YEZ[l0] = gYA8[l0];
}

int main(int Z, char *v[]) {
    if (Z < 2) return 0;
    int hNoh = Z - 1;
    int *YEZ = (int *)malloc(hNoh * sizeof(int));
    for (int tpnJ = 0; tpnJ < hNoh; tpnJ++) YEZ[tpnJ] = atoi(v[tpnJ + 1]);

    A18R(YEZ, 0, hNoh - 1);

    for (int tpnJ = 0; tpnJ < hNoh; tpnJ++) {
        printf("%d%s", YEZ[tpnJ], (tpnJ == hNoh - 1 ? "" : " "));
    }
    printf("\n");
    free(YEZ);
    return 0;
}