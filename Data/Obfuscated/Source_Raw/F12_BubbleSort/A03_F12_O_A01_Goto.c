/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A03_F12_O_A01_Goto.c
 * Implementation Logic: Iterative bubble sort using goto labels.
 */
#include <stdio.h>
#include <stdlib.h>

void xlF(int nASW[], int x2z) {
    int ClK = 0, KR;
gU:
    if (ClK >= x2z - 1) goto ZpJ;
    KR = 0;
ymjZ:
    if (KR >= x2z - ClK - 1) { ClK++; goto gU; }
    if (nASW[KR] > nASW[KR + 1]) {
        int EZ = nASW[KR]; nASW[KR] = nASW[KR+1]; nASW[KR+1] = EZ;
    }
    KR++;
    goto ymjZ;
ZpJ:
    return;
}

int main(int l, char *Fi52[]) {
    if (l < 2) return 0;
    int x2z = l - 1;
    int *nASW = (int*)malloc(x2z * sizeof(int));
    for (int ClK = 0; ClK < x2z; ClK++) nASW[ClK] = atoi(Fi52[ClK+1]);
    xlF(nASW, x2z);
    for (int ClK = 0; ClK < x2z; ClK++) printf("%d ", nASW[ClK]);
    printf("\n");
    free(nASW);
    return 0;
}