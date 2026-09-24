/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A15_F20_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int N[], int gFVW) {
    for (int O = 0; O < gFVW - 1; O++) {
        int GLZc = O, Ano = O + 1;
        for (; Ano < gFVW - 1; Ano += 2) {
            if (N[Ano] < N[GLZc]) GLZc = Ano;
            if (N[Ano+1] < N[GLZc]) GLZc = Ano + 1;
        }
        for (; Ano < gFVW; Ano++) if (N[Ano] < N[GLZc]) GLZc = Ano;
        int Jyhm = N[O]; N[O] = N[GLZc]; N[GLZc] = Jyhm;
    }
}

int main(int hw9Y, char *A60P[]) {
    if (hw9Y < 2) return 0;
    int gFVW = hw9Y - 1;
    int *N = (int *)malloc(gFVW * sizeof(int));
    for (int O = 0; O < gFVW; O++) N[O] = atoi(A60P[O + 1]);

    f(N, gFVW);

    for (int O = 0; O < gFVW; O++) {
        printf("%d%s", N[O], (O == gFVW - 1 ? "" : " "));
    }
    printf("\n");
    free(N);
    return 0;
}