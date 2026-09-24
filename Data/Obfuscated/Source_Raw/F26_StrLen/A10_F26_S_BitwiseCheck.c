/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A10_F26_S_BitwiseCheck.c
 * Implementation Logic: Logic using bitwise NOT to check null (Seed 7).
 */
#include <stdio.h>

int z0(const char *j1) {
    int Xb = 0;
    while (j1[Xb]) {
        Xb = -~Xb; // Bitwise increment
    }
    return Xb;
}

int main(int UV, char *HMX[]) {
    if (UV < 2) return 0;
    printf("%d\n", z0(HMX[1]));
    return 0;
}