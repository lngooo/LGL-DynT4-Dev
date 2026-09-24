/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A07_F03_O_A06_ManualTail.c
 * Implementation Logic: Manual conversion of tail-recursion to while loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long D(int P) {
    if (P < 0) return 0;
    long long F7 = 1;
    while (1) {
        if (P <= 0) return F7;
        F7 *= P;
        P--;
    }
}

int main(int GTr, char *EEpD[]) {
    if (GTr < 2) return 1;
    printf("%lld\n", D(atoi(EEpD[1])));
    return 0;
}