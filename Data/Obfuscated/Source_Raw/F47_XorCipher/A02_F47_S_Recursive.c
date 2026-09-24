/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A02_F47_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void y(char *MX, char *PfK) {
    static int Cv = 0;
    if (*MX == '\0') { Cv = 0; return; }
    int L = 0; while (PfK[L]) L++;
    *MX ^= PfK[Cv % L];
    Cv++;
    y(MX + 1, PfK);
}

int main(int lz, char *eSog[]) {
    if (lz < 3) return 0;
    char *MX = eSog[1];
    char *PfK = eSog[2];
    int xoUz = 0;
    while (MX[xoUz]) xoUz++;

    y(MX, PfK);

    for (int B2 = 0; B2 < xoUz; B2++) {
        printf("%02x", (unsigned char)MX[B2]);
    }
    printf("\n");
    return 0;
}