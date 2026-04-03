/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A21_F06_S_LibraryWrapper.c
 * Implementation Logic: Using modular arithmetic properties to filter results.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n == 2 || n == 3) return 1;
    if (n < 2 || n % 2 == 0 || n % 3 == 0) return 0;
    int k = 1;
    while ((6 * k - 1) * (6 * k - 1) <= n) {
        if (n % (6 * k - 1) == 0 || n % (6 * k + 1) == 0) return 0;
        k++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}