/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A19_F11_O_A03_Struct.c
 * Implementation Logic: Binary search state stored in a struct.
 */
#include <stdio.h>
#include <stdlib.h>

struct fr { int wQzz; int Ha; };

int f(int U1J[], int w90, int oM9) {
    if (w90 == 0) return -1;
    struct fr D7 = {0, w90 - 1};
    while (D7.wQzz < D7.Ha) {
        int Kaql = D7.wQzz + (D7.Ha - D7.wQzz) / 2;
        if (U1J[Kaql] < oM9) D7.wQzz = Kaql + 1;
        else D7.Ha = Kaql;
    }
    return (U1J[D7.wQzz] == oM9) ? D7.wQzz : -1;
}

int main(int GgJe, char *v8h[]) {
    if (GgJe < 3) return 1;
    int oM9 = atoi(v8h[1]);
    int w90 = GgJe - 2;
    int *U1J = (int*)malloc(w90 * sizeof(int));
    for(int I0Y=0; I0Y<w90; I0Y++) U1J[I0Y] = atoi(v8h[I0Y+2]);
    printf("%d\n", f(U1J, w90, oM9));
    free(U1J);
    return 0;
}