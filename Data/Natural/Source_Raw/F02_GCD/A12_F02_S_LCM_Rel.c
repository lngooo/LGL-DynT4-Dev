/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A12_F02_S_LCM_Rel.c
 * Implementation Logic: Using GCD = (a*b)/LCM relation (Seed 6).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
    if (a == 0 || b == 0) return a | b;
    long long prod = (long long)a * b;
    int max = (a > b) ? a : b;
    long long lcm = max;
    while (lcm % a != 0 || lcm % b != 0) lcm += max;
    return (int)(prod / lcm);
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}