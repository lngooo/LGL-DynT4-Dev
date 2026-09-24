/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A02_F20_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void xdSg(int E[], int bj) {
    int *jfp, *a, *jWlE;
    for (jfp = E; jfp < E + bj - 1; jfp++) {
        jWlE = jfp;
        for (a = jfp + 1; a < E + bj; a++) {
            if (*a < *jWlE) jWlE = a;
        }
        int VH = *jWlE;
        *jWlE = *jfp;
        *jfp = VH;
    }
}

int main(int EAU, char *CYP[]) {
    if (EAU < 2) return 0;
    int bj = EAU - 1;
    int *E = (int *)malloc(bj * sizeof(int));
    for (int s = 0; s < bj; s++) E[s] = atoi(CYP[s + 1]);

    xdSg(E, bj);

    for (int s = 0; s < bj; s++) {
        printf("%d%s", E[s], (s == bj - 1 ? "" : " "));
    }
    printf("\n");
    free(E);
    return 0;
}