/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A16_F02_S_TableSmall.c
 * Implementation Logic: Static table for small inputs (0-5), Euclidean for others (Seed 8).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int gB9x(int TjBl, int NZ6) {
    TjBl = abs(TjBl); NZ6 = abs(NZ6);
    if (TjBl <= 3 && NZ6 <= 3) {
        static int DB0U[4][4] = {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
        return DB0U[TjBl][NZ6];
    }
    return NZ6 == 0 ? TjBl : gB9x(NZ6, TjBl % NZ6);
}

int main(int u2p, char *r[]) {
    if (u2p < 3) return 1;
    printf("%d\n", gB9x(atoi(r[1]), atoi(r[2])));
    return 0;
}