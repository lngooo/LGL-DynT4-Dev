/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A01_F22_S_StandardBackwards.c
 * Implementation Logic: StandardBackwards
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CRso(int Vk[], int HZYm) {
    for (int L = 1; L < HZYm; L++) {
        int O = Vk[L];
        int Z = L - 1;
        while (Z >= 0 && Vk[Z] > O) {
            Vk[Z + 1] = Vk[Z];
            Z = Z - 1;
        }
        Vk[Z + 1] = O;
    }
}

int main(int ax, char *KI3e[]) {
    if (ax < 2) return 0;
    int HZYm = ax - 1;
    int *Vk = (int *)malloc(HZYm * sizeof(int));
    for (int L = 0; L < HZYm; L++) Vk[L] = atoi(KI3e[L + 1]);

    CRso(Vk, HZYm);

    for (int L = 0; L < HZYm; L++) {
        printf("%d%s", Vk[L], (L == HZYm - 1 ? "" : " "));
    }
    printf("\n");
    free(Vk);
    return 0;
}