/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A21_F11_O_A02_Trampoline.c
 * Implementation Logic: Pseudo-trampolined recursive calls.
 */
#include <stdio.h>
#include <stdlib.h>

int RV0v(int J[], int Eu, int n5K) {
    int l8V = 0, FV = Eu - 1;
    while (l8V <= FV) {
        int pV = l8V + (FV - l8V) / 2;
        if (J[pV] == n5K) return pV;
        if (J[pV] < n5K) { l8V = pV + 1; continue; }
        FV = pV - 1;
    }
    return -1;
}

int main(int qn, char *m1[]) {
    if (qn < 3) return 1;
    int n5K = atoi(m1[1]);
    int Eu = qn - 2;
    int *J = (int*)malloc(Eu * sizeof(int));
    for(int Nw=0; Nw<Eu; Nw++) J[Nw] = atoi(m1[Nw+2]);
    printf("%d\n", RV0v(J, Eu, n5K));
    free(J);
    return 0;
}