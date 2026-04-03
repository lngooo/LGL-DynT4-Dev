/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A13_F06_O_A12_Pointer.c
 * Implementation Logic: Sieve logic using pointer arithmetic instead of indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    int *base = (int *)calloc(n + 1, sizeof(int));
    for (int i = 2; i * i <= n; i++) {
        if (*(base + i) == 0) {
            for (int j = i * i; j <= n; j += i) *(base + j) = 1;
        }
    }
    int res = (*(base + n) == 0);
    free(base);
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}