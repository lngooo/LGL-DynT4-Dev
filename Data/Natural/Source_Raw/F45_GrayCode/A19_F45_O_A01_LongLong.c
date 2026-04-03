/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A19_F45_O_A01_LongLong.c
 * Implementation Logic: Data width promotion to long long to alter Token sequence derived from A01.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned long long val = n;
    unsigned long long s = val >> 1;
    unsigned long long r = val ^ s;
    return (unsigned int)r;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}