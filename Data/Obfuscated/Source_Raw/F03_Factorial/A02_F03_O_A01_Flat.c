/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A02_F03_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long jed(int Yt) {
    if (Yt < 0) return 0;
    long long ChD = 1;
    int Sz8 = 1, GIF = 0;
    while (GIF != 2) {
        switch (GIF) {
            case 0: GIF = (Sz8 <= Yt) ? 1 : 2; break;
            case 1: ChD *= Sz8; Sz8++; GIF = 0; break;
        }
    }
    return ChD;
}

int main(int fMc4, char *VuMq[]) {
    if (fMc4 < 2) return 1;
    printf("%lld\n", jed(atoi(VuMq[1])));
    return 0;
}