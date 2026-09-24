/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A14_F05_S_Recursive.c
 * Implementation Logic: Recursive binary search for sqrt (Seed 7).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int x(long RhA, long Y5U, long M) {
    if (Y5U > M) return (int)M;
    long q9PY = Y5U + (M - Y5U) / 2;
    if (q9PY * q9PY == RhA) return (int)q9PY;
    if (q9PY * q9PY < RhA) return x(RhA, q9PY + 1, M);
    return x(RhA, Y5U, q9PY - 1);
}

int Ud(int RhA) {
    if (RhA < 0) return -1;
    return x(RhA, 0, RhA);
}

int main(int kHOU, char *j0Rp[]) {
    if (kHOU < 2) return 1;
    printf("%d\n", Ud(atoi(j0Rp[1])));
    return 0;
}