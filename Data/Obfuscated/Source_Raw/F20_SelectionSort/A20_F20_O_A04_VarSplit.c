/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A20_F20_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void l(int h[], int wEN) {
    int hmM = 0, I = wEN - 1;
    while (hmM < I) {
        int H = hmM, n3 = hmM;
        for (int h5n = hmM; h5n <= I; h5n++) {
            if (h[h5n] < h[H]) H = h5n;
            if (h[h5n] > h[n3]) n3 = h5n;
        }
        int u = h[hmM]; h[hmM] = h[H]; h[H] = u;
        if (n3 == hmM) n3 = H;
        int of = h[I]; h[I] = h[n3]; h[n3] = of;
        hmM++; I--;
    }
}

int main(int rr, char *m9fw[]) {
    if (rr < 2) return 0;
    int wEN = rr - 1;
    int *h = (int *)malloc(wEN * sizeof(int));
    for (int DVZ = 0; DVZ < wEN; DVZ++) h[DVZ] = atoi(m9fw[DVZ + 1]);

    l(h, wEN);

    for (int DVZ = 0; DVZ < wEN; DVZ++) {
        printf("%d%s", h[DVZ], (DVZ == wEN - 1 ? "" : " "));
    }
    printf("\n");
    free(h);
    return 0;
}