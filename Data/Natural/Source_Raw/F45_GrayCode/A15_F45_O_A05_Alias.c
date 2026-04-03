/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A15_F45_O_A05_Alias.c
 * Implementation Logic: Array-based aliasing and redundant data flow derived from A05.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int arr[3];
    arr[0] = n;
    arr[1] = n >> 1;
    arr[2] = arr[0] ^ arr[1];
    unsigned int *ptr = &arr[2];
    return *ptr;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}