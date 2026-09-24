/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A11_F22_O_A01_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void V7pi(int r[], int fpX) {
    for (int vKz = 1; vKz < fpX; vKz++) {
        int N = r[vKz], xrQ = vKz - 1;
        while (!(xrQ < 0) && (r[xrQ] > N)) {
            r[xrQ + 1] = r[xrQ];
            xrQ = xrQ - 1;
        }
        r[xrQ + 1] = N;
    }
}

int main(int YPZ, char *h[]) {
    if (YPZ < 2) return 0;
    int fpX = YPZ - 1;
    int *r = (int *)malloc(fpX * sizeof(int));
    for (int vKz = 0; vKz < fpX; vKz++) r[vKz] = atoi(h[vKz + 1]);

    V7pi(r, fpX);

    for (int vKz = 0; vKz < fpX; vKz++) {
        printf("%d%s", r[vKz], (vKz == fpX - 1 ? "" : " "));
    }
    printf("\n");
    free(r);
    return 0;
}