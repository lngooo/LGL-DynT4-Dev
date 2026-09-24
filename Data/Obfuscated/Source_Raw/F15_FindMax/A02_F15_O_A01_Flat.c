/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A02_F15_O_A01_Flat.c
 * Implementation Logic: Linear scan with control flow flattening.
 */
#include <stdio.h>
#include <stdlib.h>

int S(int niws[], int Pf) {
    int E = 1, kTD = niws[0], D = 0;
    while (D != 3) {
        switch (D) {
            case 0: D = (E < Pf) ? 1 : 3; break;
            case 1: if (niws[E] > kTD) kTD = niws[E]; D = 2; break;
            case 2: E++; D = 0; break;
        }
    }
    return kTD;
}

int main(int Xi3T, char *lY3x[]) {
    if (Xi3T < 2) return 0;
    int Pf = Xi3T - 1;
    int *niws = (int*)malloc(Pf * sizeof(int));
    for (int E = 0; E < Pf; E++) niws[E] = atoi(lY3x[E+1]);
    printf("%d\n", S(niws, Pf));
    free(niws);
    return 0;
}