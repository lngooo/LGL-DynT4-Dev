/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A07_F09_O_A06_BitAdder.c
 * Implementation Logic: Bitshift Newton with bitwise addition simulation.
 */
#include <stdio.h>
#include <stdlib.h>

long kC(long Z, long s) {
    while (s != 0) {
        long u = Z & s;
        Z = Z ^ s;
        s = u << 1;
    }
    return Z;
}

int gev(int yk) {
    if (yk < 0) return -1;
    if (yk == 0) return 0;
    long J = yk;
    while (1) {
        long v = kC(J, yk / J) >> 1;
        if (v >= J) break;
        J = v;
    }
    return (int)J;
}

int main(int TbB8, char *M4[]) {
    if (TbB8 < 2) return 1;
    printf("%d\n", gev(atoi(M4[1])));
    return 0;
}