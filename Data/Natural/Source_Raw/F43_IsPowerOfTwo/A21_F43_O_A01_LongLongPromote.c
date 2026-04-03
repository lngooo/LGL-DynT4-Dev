/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A21_F43_O_A01_LongLongPromote.c
 * Implementation Logic: Data width expansion to long long to change token signature derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    unsigned long long val = n;
    if (val == 0) return 0;
    unsigned long long temp = val - 1;
    return (val & temp) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}