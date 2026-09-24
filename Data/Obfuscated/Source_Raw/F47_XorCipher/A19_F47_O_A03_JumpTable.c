/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A19_F47_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void J(char *lV, char *AA) {
    int KPrX = 0;
    while (AA[KPrX]) KPrX++;
    if (KPrX == 0) return;
    for (int N = 0; lV[N]; N++) {
        int X = N & 1;
        switch (X) {
            case 0:
                lV[N] ^= AA[N % KPrX];
                break;
            default:
                lV[N] ^= AA[N % KPrX];
                break;
        }
    }
}

int main(int GPGB, char *nGW[]) {
    if (GPGB < 3) return 0;
    char *lV = nGW[1];
    char *AA = nGW[2];
    int RMZ = 0;
    while (lV[RMZ]) RMZ++;

    J(lV, AA);

    for (int N = 0; N < RMZ; N++) {
        printf("%02x", (unsigned char)lV[N]);
    }
    printf("\n");
    return 0;
}