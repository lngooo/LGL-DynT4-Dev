/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A07_F06_O_A06_Bitwise.c
 * Implementation Logic: Wilson's theorem with instruction replacement.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    long long f = 1;
    for (int i = 1; i < n; i++) {
        long long t = 0;
        for(int j=0; j<i; j++) t = (t + f) % n;
        f = t;
    }
    return (f == (long long)n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}