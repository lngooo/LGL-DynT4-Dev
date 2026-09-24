/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A06_F18_S_MedianOfThreeSelect.c
 * Implementation Logic: MedianOfThreeSelect
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int M(int hIV[], int keQW, int R, int jCw) {
    int nT = keQW + (R - keQW) / 2;
    if (hIV[nT] < hIV[keQW]) { int CS=hIV[nT]; hIV[nT]=hIV[keQW]; hIV[keQW]=CS; }
    if (hIV[R] < hIV[keQW]) { int CS=hIV[R]; hIV[R]=hIV[keQW]; hIV[keQW]=CS; }
    if (hIV[R] < hIV[nT]) { int CS=hIV[R]; hIV[R]=hIV[nT]; hIV[nT]=CS; }
    int O = hIV[nT];
    int y = keQW, CdM = R;
    while (y <= CdM) {
        while (hIV[y] < O) y++;
        while (hIV[CdM] > O) CdM--;
        if (y <= CdM) { int CS=hIV[y]; hIV[y]=hIV[CdM]; hIV[CdM]=CS; y++; CdM--; }
    }
    if (jCw - 1 <= CdM - keQW) return M(hIV, keQW, CdM, jCw);
    if (jCw - 1 >= y - keQW) return M(hIV, y, R, jCw - (y - keQW));
    return hIV[CdM+1];
}

int main(int d, char *Xm7p[]) {
    if (d < 3) return 0;
    int jCw = atoi(Xm7p[1]);
    int pmf = d - 2;
    int *hIV = (int *)malloc(pmf * sizeof(int));
    for (int y = 0; y < pmf; y++) hIV[y] = atoi(Xm7p[y + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int A = M(hIV, 0, pmf - 1, jCw);

    printf("%d\n", A);
    free(hIV);
    return 0;
}