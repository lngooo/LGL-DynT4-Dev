/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A17_F43_O_A05_TernaryChain.c
 * Implementation Logic: Obfuscating recursion using nested ternary operators derived from A05.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    return (n == 0) ? 0 : (n == 1) ? 1 : (n % 2 != 0) ? 0 : IsPowerOfTwo(n >> 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}