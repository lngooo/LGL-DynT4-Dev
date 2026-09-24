/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A21_F07_O_A03_StructState.c
 * Implementation Logic: Fast power using a struct to hold the state.
 */
#include <stdio.h>
#include <stdlib.h>

struct Fy { int p; int OMeH; int x; };

int iy3(int xIRl, int exp) {
    struct Fy XebL = {xIRl, exp, 1};
    while (XebL.OMeH > 0) {
        if (XebL.OMeH % 2 == 1) XebL.x *= XebL.p;
        XebL.p *= XebL.p;
        XebL.OMeH /= 2;
    }
    return XebL.x;
}

int main(int a, char *nc7[]) {
    if (a < 3) return 1;
    printf("%d\n", iy3(atoi(nc7[1]), atoi(nc7[2])));
    return 0;
}