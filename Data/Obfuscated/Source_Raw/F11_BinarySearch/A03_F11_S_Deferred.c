/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A03_F11_S_Deferred.c
 * Implementation Logic: Binary search that defers equality check to the end.
 */
#include <stdio.h>
#include <stdlib.h>

int B(int Jqi[], int L2, int avD) {
    if (L2 == 0) return -1;
    int cj = 0, MdX = L2 - 1;
    while (cj < MdX) {
        int FYK = cj + (MdX - cj) / 2;
        if (Jqi[FYK] < avD) cj = FYK + 1;
        else MdX = FYK;
    }
    return (Jqi[cj] == avD) ? cj : -1;
}

int main(int eYT, char *Ho9[]) {
    if (eYT < 3) return 1;
    int avD = atoi(Ho9[1]);
    int L2 = eYT - 2;
    int *Jqi = (int*)malloc(L2 * sizeof(int));
    for(int He=0; He<L2; He++) Jqi[He] = atoi(Ho9[He+2]);
    printf("%d\n", B(Jqi, L2, avD));
    free(Jqi);
    return 0;
}