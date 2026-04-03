/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A02_F43_S_Iterative.c
 * Implementation Logic: Naive iterative division. Repeatedly divide by 2 while the number is even.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}