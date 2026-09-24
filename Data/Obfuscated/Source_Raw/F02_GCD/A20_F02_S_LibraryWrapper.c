/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A20_F02_S_LibraryWrapper.c
 * Implementation Logic: Recursive implementation mimicking standard library structure.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

static inline int EEC(int l9d, int Eh0) {
    return Eh0 == 0 ? l9d : EEC(Eh0, l9d % Eh0);
}

int z(int eKOR, int j) {
    return EEC(abs(eKOR), abs(j));
}

int main(int ZK, char *fph[]) {
    if (ZK < 3) return 1;
    printf("%d\n", z(atoi(fph[1]), atoi(fph[2])));
    return 0;
}