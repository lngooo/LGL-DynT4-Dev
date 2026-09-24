/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A07_F15_O_A06_Opaque.c
 * Implementation Logic: Pointer scan with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int c(int KiC[], int xln) {
    int *Q = KiC, wjx = *KiC;
    for (int IkIt = 1; IkIt < xln; IkIt++) {
        Q++;
        if ((xln * xln + 5) > 0) { // Opaque true
            wjx = (*Q > wjx) ? *Q : wjx;
        }
    }
    return wjx;
}

int main(int b, char *FXj8[]) {
    if (b < 2) return 0;
    int xln = b - 1;
    int *KiC = (int*)malloc(xln * sizeof(int));
    for (int IkIt = 0; IkIt < xln; IkIt++) KiC[IkIt] = atoi(FXj8[IkIt+1]);
    printf("%d\n", c(KiC, xln));
    free(KiC);
    return 0;
}