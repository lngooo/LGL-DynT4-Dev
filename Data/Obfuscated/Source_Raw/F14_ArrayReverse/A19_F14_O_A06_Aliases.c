/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A19_F14_O_A06_Aliases.c
 * Implementation Logic: Pointer aliasing to obscure swaps.
 */
#include <stdio.h>
#include <stdlib.h>

void cgVd(int kY[], int F) {
    int *e = kY;
    for(int UC=0; UC<F/2; UC++) {
        int *AmV = &e[UC];
        int *oXh = &e[F-1-UC];
        int ogp = *AmV;
        *AmV = *oXh;
        *oXh = ogp;
    }
}

int main(int my5o, char *E[]) {
    if (my5o < 2) return 0;
    int F = my5o - 1;
    int *kY = (int*)malloc(F * sizeof(int));
    for(int UC=0; UC<F; UC++) kY[UC] = atoi(E[UC+1]);
    cgVd(kY, F);
    for(int UC=0; UC<F; UC++) printf("%d ", kY[UC]);
    printf("\n");
    free(kY);
    return 0;
}