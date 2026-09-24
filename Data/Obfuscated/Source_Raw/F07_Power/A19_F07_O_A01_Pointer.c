/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A19_F07_O_A01_Pointer.c
 * Implementation Logic: Iterative approach using pointer manipulation for result.
 */
#include <stdio.h>
#include <stdlib.h>

int eH(int N, int exp) {
    int Cw = 1;
    int *OV = &Cw;
    for (int AN = 0; AN < exp; AN++) *OV *= N;
    return Cw;
}

int main(int nf5g, char *Wh[]) {
    if (nf5g < 3) return 1;
    printf("%d\n", eH(atoi(Wh[1]), atoi(Wh[2])));
    return 0;
}