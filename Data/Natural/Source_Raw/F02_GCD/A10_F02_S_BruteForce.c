/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A10_F02_S_BruteForce.c
 * Implementation Logic: Brute force search from min(a,b) down to 1 (Seed 5).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    int min = (a < b) ? a : b;
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}