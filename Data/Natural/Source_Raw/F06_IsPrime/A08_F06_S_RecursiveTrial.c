/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A08_F06_S_RecursiveTrial.c
 * Implementation Logic: Recursive trial division (Seed 4).
 */
#include <stdio.h>
#include <stdlib.h>

int check(int n, int i) {
    if (i * i > n) return 1;
    if (n % i == 0) return 0;
    return check(n, i + 1);
}

int IsPrime(int n) {
    if (n <= 1) return 0;
    return check(n, 2);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}