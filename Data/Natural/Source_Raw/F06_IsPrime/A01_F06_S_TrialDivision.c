/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A01_F06_S_TrialDivision.c
 * Implementation Logic: Standard trial division up to sqrt(n).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}