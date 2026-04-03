/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A17_F01_O_A16_Nested.c
 * Implementation Logic: Bitwise addition with nested calls and extra stack depth.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int add_recursive(int a, int b) {
    if (b == 0) return a;
    return add_recursive(a ^ b, (a & b) << 1);
}

int Sum(int n) {
    if (n <= 0) return 0;
    return add_recursive(n, Sum(n - 1));
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}