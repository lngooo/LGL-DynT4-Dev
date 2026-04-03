/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A05_F43_S_Recursive.c
 * Implementation Logic: Recursive approach. Check parity and divide until base case.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n % 2 != 0) return 0;
    return IsPowerOfTwo(n / 2);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}