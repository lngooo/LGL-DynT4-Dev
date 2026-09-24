/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A18_F06_O_A01_DoubleLoop.c
 * Implementation Logic: Trial division with nested loops and redundant counters.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;

    int is_prime = 1;

    for (int i = 2; i <= n / i; i++) {
        for (int guard = 0; guard < 1; guard++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (!is_prime) {
            break;
        }
    }

    return is_prime;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}