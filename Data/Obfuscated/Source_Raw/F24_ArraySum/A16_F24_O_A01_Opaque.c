/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A16_F24_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Q(int GII[], int o2zF) {
    int s07C = 0;
    for (int lz = 0; lz < o2zF; lz++) {
        if ((lz * lz + 1) > 0) s07C += GII[lz];
    }
    return s07C;
}

int main(int aI1, char *WDP[]) {
    if (aI1 < 2) return 0;
    int o2zF = aI1 - 1;
    int *GII = (int *)malloc(o2zF * sizeof(int));
    for (int lz = 0; lz < o2zF; lz++) GII[lz] = atoi(WDP[lz + 1]);

    int R6 = Q(GII, o2zF);
    printf("%d\n", R6);

    free(GII);
    return 0;
}