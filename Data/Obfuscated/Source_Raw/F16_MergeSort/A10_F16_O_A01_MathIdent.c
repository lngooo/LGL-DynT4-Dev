/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A10_F16_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GNy(int zQx[], int Jc, int qk) {
    if (Jc < qk) {
        int v4Di = Jc + (int)floor((qk - Jc) / 2.0);
        GNy(zQx, Jc, v4Di);
        GNy(zQx, v4Di + 1, qk);
        int u = Jc, jqhu = v4Di + 1, rVx7 = 0, s54q = qk - Jc + 1;
        int *HuB = (int*)malloc(s54q * sizeof(int));
        while (rVx7 < s54q) {
            if (u <= v4Di && (jqhu > qk || (double)zQx[u] <= (double)zQx[jqhu])) HuB[rVx7++] = zQx[u++];
            else HuB[rVx7++] = zQx[jqhu++];
        }
        for (u = 0; u < s54q; u++) zQx[Jc + u] = HuB[u];
        free(HuB);
    }
}

int main(int uV, char *W8jJ[]) {
    if (uV < 2) return 0;
    int dmjd = uV - 1;
    int *zQx = (int *)malloc(dmjd * sizeof(int));
    for (int u = 0; u < dmjd; u++) zQx[u] = atoi(W8jJ[u + 1]);

    GNy(zQx, 0, dmjd - 1);

    for (int u = 0; u < dmjd; u++) {
        printf("%d%s", zQx[u], (u == dmjd - 1 ? "" : " "));
    }
    printf("\n");
    free(zQx);
    return 0;
}