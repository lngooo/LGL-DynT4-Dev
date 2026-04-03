/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A11_F03_O_A10_SplitVar.c
 * Implementation Logic: Binary splitting with variables split into higher/lower components.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long part1 = 1, part2 = 1;
    int mid = n / 2;
    for (int i = 1; i <= mid; i++) part1 *= i;
    for (int i = mid + 1; i <= n; i++) part2 *= i;
    return part1 * part2;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}