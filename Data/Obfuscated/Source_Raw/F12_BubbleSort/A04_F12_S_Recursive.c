/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A04_F12_S_Recursive.c
 * Implementation Logic: Recursive bubble sort (Seed 2).
 */
#include <stdio.h>
#include <stdlib.h>

void YFt(int J2K[], int z) {
    if (z == 1) return;
    for (int S = 0; S < z - 1; S++) {
        if (J2K[S] > J2K[S + 1]) {
            int dn = J2K[S];
            J2K[S] = J2K[S + 1];
            J2K[S + 1] = dn;
        }
    }
    YFt(J2K, z - 1);
}

int main(int E1O, char *C[]) {
    if (E1O < 2) return 0;
    int z = E1O - 1;
    int *J2K = (int*)malloc(z * sizeof(int));
    for (int S = 0; S < z; S++) J2K[S] = atoi(C[S+1]);
    YFt(J2K, z);
    for (int S = 0; S < z; S++) printf("%d ", J2K[S]);
    printf("\n");
    free(J2K);
    return 0;
}