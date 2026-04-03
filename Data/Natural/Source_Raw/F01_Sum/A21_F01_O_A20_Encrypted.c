/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A21_F01_O_A20_Encrypted.c
 * Implementation Logic: Logic with XOR-encrypted constants and redundant math.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int key = 0xABC;
    int encrypted_zero = 0 ^ key;
    int total = encrypted_zero ^ key;
    for (int i = 1; i <= n; i++) {
        int val = (i + 5) - 5;
        total += val;
    }
    return (int)total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}