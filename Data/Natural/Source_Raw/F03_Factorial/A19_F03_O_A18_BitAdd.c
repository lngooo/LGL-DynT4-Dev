/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A19_F03_O_A18_BitAdd.c
 * Implementation Logic: Repeated addition using bitwise add instead of +.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long b_add(long long a, long long b) {
    while (b) {
        long long carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        long long sum = 0;
        for (int j = 0; j < i; j++) sum = b_add(sum, res);
        res = sum;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}