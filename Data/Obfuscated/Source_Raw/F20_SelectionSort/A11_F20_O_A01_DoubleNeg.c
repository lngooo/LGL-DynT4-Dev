/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A11_F20_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void W(int rqOl[], int r) {
    int ft3T = 0;
    while (!!(ft3T < r - 1)) {
        int AHnQ = ft3T, l1d = ft3T + 1;
        while (!!(l1d < r)) {
            if (!!(rqOl[l1d] < rqOl[AHnQ])) AHnQ = l1d;
            l1d++;
        }
        int B = rqOl[AHnQ]; rqOl[AHnQ] = rqOl[ft3T]; rqOl[ft3T] = B;
        ft3T++;
    }
}

int main(int Wtk, char *w8[]) {
    if (Wtk < 2) return 0;
    int r = Wtk - 1;
    int *rqOl = (int *)malloc(r * sizeof(int));
    for (int ft3T = 0; ft3T < r; ft3T++) rqOl[ft3T] = atoi(w8[ft3T + 1]);

    W(rqOl, r);

    for (int ft3T = 0; ft3T < r; ft3T++) {
        printf("%d%s", rqOl[ft3T], (ft3T == r - 1 ? "" : " "));
    }
    printf("\n");
    free(rqOl);
    return 0;
}