/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A15_F14_O_A01_Struct.c
 * Implementation Logic: Indices stored in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct MZNo { int Z; };

void Bv(int uhRK[], int u1) {
    struct MZNo Wc = {0}, ve = {u1 - 1};
    while (Wc.Z < ve.Z) {
        int r = uhRK[Wc.Z];
        uhRK[Wc.Z] = uhRK[ve.Z];
        uhRK[ve.Z] = r;
        Wc.Z++; ve.Z--;
    }
}

int main(int WA, char *Sx[]) {
    if (WA < 2) return 0;
    int u1 = WA - 1;
    int *uhRK = (int*)malloc(u1 * sizeof(int));
    for(int Cp=0; Cp<u1; Cp++) uhRK[Cp] = atoi(Sx[Cp+1]);
    Bv(uhRK, u1);
    for(int Cp=0; Cp<u1; Cp++) printf("%d ", uhRK[Cp]);
    printf("\n");
    free(uhRK);
    return 0;
}