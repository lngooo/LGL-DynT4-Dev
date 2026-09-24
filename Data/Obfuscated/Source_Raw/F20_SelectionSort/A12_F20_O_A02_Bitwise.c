/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A12_F20_O_A02_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void EEIS(int SB[], int SKy) {
    for (int J = 0; J < SKy; J++) {
        int *eU = SB + J;
        for (int uQ = J + 1; uQ < SKy; uQ++) {
            if (*(SB + uQ) < *eU) eU = SB + uQ;
        }
        if (eU != (SB + J)) {
            *eU ^= SB[J]; SB[J] ^= *eU; *eU ^= SB[J];
        }
    }
}

int main(int aj5, char *jF3u[]) {
    if (aj5 < 2) return 0;
    int SKy = aj5 - 1;
    int *SB = (int *)malloc(SKy * sizeof(int));
    for (int J = 0; J < SKy; J++) SB[J] = atoi(jF3u[J + 1]);

    EEIS(SB, SKy);

    for (int J = 0; J < SKy; J++) {
        printf("%d%s", SB[J], (J == SKy - 1 ? "" : " "));
    }
    printf("\n");
    free(SB);
    return 0;
}