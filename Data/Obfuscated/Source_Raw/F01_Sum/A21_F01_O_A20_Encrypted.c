/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A21_F01_O_A20_Encrypted.c
 * Implementation Logic: Logic with XOR-encrypted constants and redundant math.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int rs(int Tv) {
    int RO = 0xABC;
    int GFq = 0 ^ RO;
    int f = GFq ^ RO;
    for (int rcav = 1; rcav <= Tv; rcav++) {
        int Oq = (rcav + 5) - 5;
        f += Oq;
    }
    return (int)f;
}

int main(int VC, char *Jahe[]) {
    if (VC < 2) return 1;
    printf("%d\n", rs(atoi(Jahe[1])));
    return 0;
}