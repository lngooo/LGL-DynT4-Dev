/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A17_F43_O_A05_TernaryChain.c
 * Implementation Logic: Obfuscating recursion using nested ternary operators derived from A05.
 */
#include <stdio.h>
#include <stdlib.h>

int Y7n(unsigned int FW3k) {
    return (FW3k == 0) ? 0 : (FW3k == 1) ? 1 : (FW3k % 2 != 0) ? 0 : Y7n(FW3k >> 1);
}

int main(int Hgfl, char* Ob[]) {
    if (Hgfl < 2) return 0;
    unsigned int FW3k = (unsigned int)strtoul(Ob[1], NULL, 10);
    printf("%d", Y7n(FW3k));
    return 0;
}