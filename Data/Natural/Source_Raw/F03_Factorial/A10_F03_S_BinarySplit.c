/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A10_F03_S_BinarySplit.c
 * Implementation Logic: Binary splitting method for range product (Seed 5).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long range_prod(int start, int end) {
    if (start > end) return 1;
    if (start == end) return start;
    int mid = start + (end - start) / 2;
    return range_prod(start, mid) * range_prod(mid + 1, end);
}

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    return range_prod(1, n);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}