/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A09_F06_O_A08_Ternary.c
 * Implementation Logic: Recursive logic using ternary operators for Token density.
 */
#include <stdio.h>
#include <stdlib.h>

int h(int n, int i) {
    return (i * i > n) ? 1 : (n % i == 0 ? 0 : h(n, i + 1));
}

int IsPrime(int n) {
    return (n < 2) ? 0 : h(n, 2);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}