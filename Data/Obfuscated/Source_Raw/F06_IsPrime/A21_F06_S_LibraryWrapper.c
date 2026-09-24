/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A21_F06_S_LibraryWrapper.c
 * Implementation Logic: Using modular arithmetic properties to filter results.
 */
#include <stdio.h>
#include <stdlib.h>

int LI(int RX) {
    if (RX == 2 || RX == 3) return 1;
    if (RX < 2 || RX % 2 == 0 || RX % 3 == 0) return 0;
    int U = 1;
    while ((6 * U - 1) * (6 * U - 1) <= RX) {
        if (RX % (6 * U - 1) == 0 || RX % (6 * U + 1) == 0) return 0;
        U++;
    }
    return 1;
}

int main(int TnCZ, char *Se0[]) {
    if (TnCZ < 2) return 1;
    printf("%d\n", LI(atoi(Se0[1])));
    return 0;
}