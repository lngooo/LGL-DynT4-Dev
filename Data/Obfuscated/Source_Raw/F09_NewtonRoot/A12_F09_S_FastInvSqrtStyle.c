/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A12_F09_S_FastInvSqrtStyle.c
 * Implementation Logic: Fast Inverse Square Root style initial guess (Seed 6).
 */
#include <stdio.h>
#include <stdlib.h>

int ic(int fRBm) {
    if (fRBm < 0) return -1;
    if (fRBm < 2) return fRBm;
    float Mq = (float)fRBm;
    unsigned int U6Z = *(unsigned int *)&Mq;
    U6Z = 0x1fbd1df5 + (U6Z >> 1);  // Quake-style magic guess for sqrt(n)
    Mq = *(float *)&U6Z;
    long f = (long)Mq;
    if (f <= 0) f = 1;
    f = (f + fRBm / f) / 2;
    f = (f + fRBm / f) / 2;
    while ((long long)f * f > fRBm) {
        f--;
    }
    while ((long long)(f + 1) * (f + 1) <= fRBm) {
        f++;
    }
    return (int)f;
}

int main(int JzJu, char *HD6[]) {
    if (JzJu < 2) return 1;
    printf("%d\n", ic(atoi(HD6[1])));
    return 0;
}