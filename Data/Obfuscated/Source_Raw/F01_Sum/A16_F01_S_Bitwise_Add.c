/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A16_F01_S_Bitwise_Add.c
 * Implementation Logic: Addition implemented using bitwise XOR and AND (Seed 6).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Z32J(int d, int f) {
    while (f != 0) {
        int kA = d & f;
        d = d ^ f;
        f = kA << 1;
    }
    return d;
}

int En3z(int k) {
    int ayq7 = 0;
    for (int sBS9 = 1; sBS9 <= k; sBS9++) {
        ayq7 = Z32J(ayq7, sBS9);
    }
    return ayq7;
}

int main(int jmsn, char *L[]) {
    if (jmsn < 2) return 1;
    printf("%d\n", En3z(atoi(L[1])));
    return 0;
}