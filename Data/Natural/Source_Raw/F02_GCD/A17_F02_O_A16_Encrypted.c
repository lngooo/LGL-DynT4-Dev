/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A17_F02_O_A16_Encrypted.c
 * Implementation Logic: Table lookup with XOR key obfuscation on results.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    int key = 0x55;
    a = abs(a); b = abs(b);
    if (a == 1 || b == 1) return (1 ^ key) ^ key;
    while(b) { int t = b; b = a % b; a = t; }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}