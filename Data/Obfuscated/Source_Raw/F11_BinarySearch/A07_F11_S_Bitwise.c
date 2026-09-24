/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A07_F11_S_Bitwise.c
 * Implementation Logic: Binary search using bit-level range determination.
 */
#include <stdio.h>
#include <stdlib.h>

int w(int s[], int Mfs, int yz0Q) {
    int E = 0;
    int Io = 31 - __builtin_clz(Mfs);
    for (int Vz = Io; Vz >= 0; Vz--) {
        int Ojt = E | (1 << Vz);
        if (Ojt < Mfs && s[Ojt] <= yz0Q) E = Ojt;
    }
    return (s[E] == yz0Q) ? E : -1;
}

int main(int aJ3, char *hc[]) {
    if (aJ3 < 3) return 1;
    int yz0Q = atoi(hc[1]);
    int Mfs = aJ3 - 2;
    int *s = (int*)malloc(Mfs * sizeof(int));
    for(int Vz=0; Vz<Mfs; Vz++) s[Vz] = atoi(hc[Vz+2]);
    printf("%d\n", w(s, Mfs, yz0Q));
    free(s);
    return 0;
}