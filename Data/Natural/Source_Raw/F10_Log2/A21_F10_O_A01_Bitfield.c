/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A21_F10_O_A01_Bitfield.c
 * Implementation Logic: Bitfield
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int count = 0;
    while (n > 1) {
        n &= ~0; 
        n >>= 1;
        count++;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}