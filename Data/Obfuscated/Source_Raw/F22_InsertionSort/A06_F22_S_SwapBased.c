/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A06_F22_S_SwapBased.c
 * Implementation Logic: SwapBased
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wmv(int dpof[], int o) {
    for (int VW4Z = 1; VW4Z < o; VW4Z++) {
        for (int Z = VW4Z; Z > 0 && dpof[Z-1] > dpof[Z]; Z--) {
            int U = dpof[Z]; dpof[Z] = dpof[Z-1]; dpof[Z-1] = U;
        }
    }
}

int main(int de, char *lscu[]) {
    if (de < 2) return 0;
    int o = de - 1;
    int *dpof = (int *)malloc(o * sizeof(int));
    for (int VW4Z = 0; VW4Z < o; VW4Z++) dpof[VW4Z] = atoi(lscu[VW4Z + 1]);

    wmv(dpof, o);

    for (int VW4Z = 0; VW4Z < o; VW4Z++) {
        printf("%d%s", dpof[VW4Z], (VW4Z == o - 1 ? "" : " "));
    }
    printf("\n");
    free(dpof);
    return 0;
}