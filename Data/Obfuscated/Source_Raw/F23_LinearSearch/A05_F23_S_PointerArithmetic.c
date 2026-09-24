/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A05_F23_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int TiX4(int Z3FM[], int Rpbs, int Gn4) {
    int *dJXu = Z3FM;
    for (int RuA = 0; RuA < Rpbs; RuA++) {
        if (*(dJXu + RuA) == Gn4) return RuA;
    }
    return -1;
}

int main(int ZCBz, char *drF[]) {
    if (ZCBz < 3) return 1;
    int Gn4 = atoi(drF[1]);
    int vO = ZCBz - 2;
    int Z3FM[100];
    for (int RuA = 0; RuA < vO; RuA++) {
        Z3FM[RuA] = atoi(drF[RuA + 2]);
    }
    int t = TiX4(Z3FM, vO, Gn4);
    printf("%d\n", t);
    return 0;
}