/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A06_F10_S_SubtractionLoop.c
 * Implementation Logic: SubtractionLoop
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int count = -1;
    unsigned int p = 1;
    while (p <= (unsigned int)n && p > 0) {
        p <<= 1;
        count++;
        if (p > (unsigned int)n) break;
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