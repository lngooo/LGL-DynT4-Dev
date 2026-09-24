/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A06_F05_S_BitByBit.c
 * Implementation Logic: Bit-by-bit calculation (Seed 3).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int kQ(int Kc0) {
    if (Kc0 < 0) return -1;
    unsigned int f = 0;
    unsigned int P = 1 << 30;
    while (P > Kc0) P >>= 2;
    while (P != 0) {
        if (Kc0 >= f + P) {
            Kc0 -= f + P;
            f = (f >> 1) + P;
        } else {
            f >>= 1;
        }
        P >>= 2;
    }
    return (int)f;
}

int main(int PnX, char *NObF[]) {
    if (PnX < 2) return 1;
    printf("%d\n", kQ(atoi(NObF[1])));
    return 0;
}