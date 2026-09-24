/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A06_F12_S_EarlyExit.c
 * Implementation Logic: Iterative with 'swapped' flag for early exit (Seed 3).
 */
#include <stdio.h>
#include <stdlib.h>

void y(int DO9[], int kO) {
    int AON;
    for (int efkv = 0; efkv < kO - 1; efkv++) {
        AON = 0;
        for (int uu = 0; uu < kO - efkv - 1; uu++) {
            if (DO9[uu] > DO9[uu + 1]) {
                int TrM = DO9[uu]; DO9[uu] = DO9[uu + 1]; DO9[uu + 1] = TrM;
                AON = 1;
            }
        }
        if (!AON) break;
    }
}

int main(int r4CX, char *VLH[]) {
    if (r4CX < 2) return 0;
    int kO = r4CX - 1;
    int *DO9 = (int*)malloc(kO * sizeof(int));
    for (int efkv = 0; efkv < kO; efkv++) DO9[efkv] = atoi(VLH[efkv+1]);
    y(DO9, kO);
    for (int efkv = 0; efkv < kO; efkv++) printf("%d ", DO9[efkv]);
    printf("\n");
    free(DO9);
    return 0;
}