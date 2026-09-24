/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A17_F05_O_A16_XORTable.c
 * Implementation Logic: Lookup table with XOR-encoded values to vary tokens.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int z0w9(int sc) {
    if (sc < 0) return -1;
    if (sc < 4) {
        int Tfw[] = {0^0xF, 1^0xF, 1^0xF, 1^0xF};
        return Tfw[sc] ^ 0xF;
    }
    int PqVE = 2;
    while (PqVE * PqVE <= sc) PqVE++;
    return PqVE - 1;
}

int main(int m0, char *JSr[]) {
    if (m0 < 2) return 1;
    printf("%d\n", z0w9(atoi(JSr[1])));
    return 0;
}