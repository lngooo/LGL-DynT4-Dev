/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A16_F01_S_Bitwise_Add.c
 * Implementation Logic: Addition implemented using bitwise XOR and AND (Seed 6).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int bitwise_add(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int Sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total = bitwise_add(total, i);
    }
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}