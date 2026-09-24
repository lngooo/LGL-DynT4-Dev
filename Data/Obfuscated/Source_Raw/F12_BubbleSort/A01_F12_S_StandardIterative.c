/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A01_F12_S_StandardIterative.c
 * Implementation Logic: Classic nested loop bubble sort (Seed 1).
 */
#include <stdio.h>
#include <stdlib.h>

void Xg(int f[], int NaW2) {
    for (int E = 0; E < NaW2 - 1; E++) {
        for (int NuF = 0; NuF < NaW2 - E - 1; NuF++) {
            if (f[NuF] > f[NuF + 1]) {
                int FlW = f[NuF];
                f[NuF] = f[NuF + 1];
                f[NuF + 1] = FlW;
            }
        }
    }
}

int main(int zoW, char *dH[]) {
    if (zoW < 2) return 1;
    int NaW2 = zoW - 1;
    int *f = (int*)malloc(NaW2 * sizeof(int));
    for (int E = 0; E < NaW2; E++) f[E] = atoi(dH[E + 1]);
    Xg(f, NaW2);
    for (int E = 0; E < NaW2; E++) printf("%d ", f[E]);
    printf("\n");
    free(f);
    return 0;
}