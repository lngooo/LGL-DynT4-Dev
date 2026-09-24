/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A13_F06_O_A12_Pointer.c
 * Implementation Logic: Sieve logic using pointer arithmetic instead of indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int H(int e) {
    if (e < 2) return 0;
    int *W = (int *)calloc(e + 1, sizeof(int));
    for (int A = 2; A * A <= e; A++) {
        if (*(W + A) == 0) {
            for (int Oo = A * A; Oo <= e; Oo += A) *(W + Oo) = 1;
        }
    }
    int T = (*(W + e) == 0);
    free(W);
    return T;
}

int main(int an, char *xdNO[]) {
    if (an < 2) return 1;
    printf("%d\n", H(atoi(xdNO[1])));
    return 0;
}