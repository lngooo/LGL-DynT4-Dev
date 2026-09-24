/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A07_F19_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N(int Va[], int SIVw) {
    int VQ = 0, M = 0, kR74;
le:
    if (VQ >= SIVw) goto iGw;
    kR74 = 0;
B:
    if (kR74 >= M) goto ykxh;
    if (Va[VQ] == Va[kR74]) goto Rp1;
    kR74++; goto B;
ykxh:
    Va[M++] = Va[VQ];
Rp1:
    VQ++; goto le;
iGw:
    return M;
}

int main(int s, char *Esq[]) {
    if (s < 2) return 0;
    int aV = s - 1;
    int Va[128];
    for (int VQ = 0; VQ < aV; VQ++) {
        Va[VQ] = atoi(Esq[VQ + 1]);
    }
    int n7t7 = N(Va, aV);
    for (int VQ = 0; VQ < n7t7; VQ++) {
        printf("%d%s", Va[VQ], (VQ == n7t7 - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}